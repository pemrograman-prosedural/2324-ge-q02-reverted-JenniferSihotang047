#include "dorm.h"
#include "string.h"

struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender, char *_id, char *_year) {
  struct dorm_t dorm;

  strncpy(dorm.name, _name, sizeof(dorm.name) - 1);
  dorm.name[sizeof(dorm.name) - 1] = '\0';

  strncpy(student.id, _id, sizeof(student.id) - 1);
  dorm.id[sizeof(student.id) - 1] = '\0';

  strncpy(student.year, _year, sizeof(student.year) - 1);
  dorm.year[sizeof(student.year) - 1] = '\0';

  dorm.capacity = _capacity;
  dorm.gender = _gender;
  dorm.residents_num = 0;

  return dorm;
}