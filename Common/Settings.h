#ifndef SETTINGS_H
#define SETTINGS_H
#include <QString>
class Settings{
public:
  static Settings& getInstance(){
    static Settings instance;
    return instance;
  }
  QString translateFrom;
  QString translateInto;
private:
  Settings()= default;
  ~Settings()= default;
  Settings(const Settings&)= delete;
  Settings& operator=(const Settings&)= delete;

};
#endif // SETTINGS_H
