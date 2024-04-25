#include "Space.h"

Space& Space::operator++()
{
    ++x;
    ++y;
    ++z;
    // returned value should be a reference to *this
    return *this;
}

/*
������ ��������� ��� �������� (++i) � ��������� (i++) ���� � ��� ��. �������������, ��� ����� ��� ������ ����������� �������, ����� ��������� ��. ��� ����������� ����� �������� ���������� ��������� int � ����������� ������.
*/
Space Space::operator++(int)
{
    // returned value should be a copy of the object before decrement
    Space temp = *this;
    ++x;
    ++y;
    ++z;
    return temp;


}
