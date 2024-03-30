#include <iostream>
#include <string>

using namespace std;

// Структура билета
struct Ticket {
    int trainNumber;
    string destination;
    string departureTime; // Используем string для времени отправления
    int travelTime;
    float cost;
};


bool isValidTime(const string& time) {
    // Проверяем длину строки
    if (time.length() != 5) return false;
    // Проверяем, что символы часов, минут и разделитель корректны
    if (!isdigit(time[0]) || !isdigit(time[1]) || time[2] != ':' || !isdigit(time[3]) || !isdigit(time[4])) {
        return false;
    }
    // Проверяем, что часы и минуты находятся в допустимых пределах
    int hours = (time[0] - '0') * 10 + (time[1] - '0');
    int minutes = (time[3] - '0') * 10 + (time[4] - '0');
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        return false;
    }
    return true;
}


void inputTicket(Ticket& ticket) {
    do {
        cout << "Введите номер поезда (положительное число): ";
        cin >> ticket.trainNumber;
        cin.ignore(); // Очищаем cin
        if (cin.fail() || ticket.trainNumber <= 0) {
            cout << "Неверный ввод. Пожалуйста, введите положительное число.\n";
            cin.clear();
        }
    } while (ticket.trainNumber <= 0);

    do {
        cout << "Введите станцию назначения: ";
        getline(cin, ticket.destination);
        if (ticket.destination.empty()) {
            cout << "Станция назначения не может быть пустой. Пожалуйста, введите название станции.\n";
        }
    } while (ticket.destination.empty());

    do {
        cout << "Введите время отправления (HH:MM): ";
        getline(cin, ticket.departureTime);
        if (!isValidTime(ticket.departureTime)) {
            cout << "Неверный формат времени. Пожалуйста, используйте формат HH:MM.\n";
        }
    } while (!isValidTime(ticket.departureTime));

    do {
        cout << "Введите время в пути (в часах, положительное число): ";
        cin >> ticket.travelTime;
        if (cin.fail() || ticket.travelTime <= 0) {
            cout << "Неверный ввод. Пожалуйста, введите положительное число.\n";
            cin.clear();
        }
    } while (ticket.travelTime <= 0);

    do {
        cout << "Введите стоимость билета (положительное число): ";
        cin >> ticket.cost;
        if (cin.fail() || ticket.cost < 0) {
            cout << "Стоимость не может быть отрицательной. Пожалуйста, введите положительное число.\n";
            cin.clear();
        }
    } while (ticket.cost < 0);
}

// Функция для вывода информации о билете
void printTicket(const Ticket& ticket) {
    cout << ticket.trainNumber << "\t" << ticket.destination << "\t\t" << ticket.departureTime << "\t\t"
        << ticket.travelTime << " ч.\t\t" << ticket.cost << " руб." << endl;
}

// Функция для сравнения времени отправления двух билетов
bool isEarlier(const string& time1, const string& time2) {
    int hours1 = stoi(time1.substr(0, 2));
    int minutes1 = stoi(time1.substr(3, 2));
    int hours2 = stoi(time2.substr(0, 2));
    int minutes2 = stoi(time2.substr(3, 2));

    return (hours1 < hours2) || (hours1 == hours2 && minutes1 < minutes2);
}

// Функция сортировки билетов по времени отправления
void SortTicketsByDepartureTime(Ticket* tickets, int n) { // сортировка пузырьком
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!isEarlier(tickets[j].departureTime, tickets[j + 1].departureTime)) {
                // Обмен местами
                Ticket temp = tickets[j];
                tickets[j] = tickets[j + 1];
                tickets[j + 1] = temp;
            }
        }
    }
}

int main() {
    
    setlocale(LC_ALL, " ");
    int n = 3; // Количество билетов
    Ticket* tickets = new Ticket[n]; // Динамический массив билетов

    int choice;
    do {
        cout << "\nМеню:\n"
            << "1. Ввод данных\n"
            << "2. Вывод всей информации\n"
            << "3. Средняя стоимость билетов\n"
            << "4. Самый дешевый билет до станции\n"
            << "5. Сортировка по времени отправления\n"
            << "0. Выход\n"
            << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            for (int i = 0; i < n; ++i) {
                cout << "Билет " << i + 1 << ":\n";
                inputTicket(tickets[i]);
            }
            break;
        case 2:
            cout << "Номер\tНазначение\tОтправление\tВремя в пути\tСтоимость\n";
            for (int i = 0; i < n; ++i) {
                printTicket(tickets[i]);
            }
            break;
        case 3: {
            float totalCost = 0;
            for (int i = 0; i < n; ++i) {
                totalCost += tickets[i].cost;
            }
            cout << "Средняя стоимость билетов: " << totalCost / n << " руб.\n";
            break;
        }
        case 4: {
            string dest;
            cin.ignore(); // Очищаем cin
            cout << "Введите станцию назначения: ";
            getline(cin, dest);
            Ticket* cheapest = nullptr;
            for (int i = 0; i < n; ++i) {
                if (tickets[i].destination == dest && (!cheapest || tickets[i].cost < cheapest->cost)) {
                    cheapest = &tickets[i];
                }
            }
            if (cheapest) {
                cout << "Самый дешевый билет до " << dest << ":\n";
                printTicket(*cheapest);
            }
            else {
                cout << "Билетов до станции " << dest << " не найдено.\n";
            }
            break;
        }
        case 5:
            SortTicketsByDepartureTime(tickets, n);
            cout << "Билеты отсортированы по времени отправления.\n";
            break;
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    delete[] tickets; // Освобождение памяти
    return 0;
}