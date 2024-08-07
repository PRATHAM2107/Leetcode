        else {
            int tens = num / 10;
            int ones = num % 10;
            return ten_places[tens] + (ones == 0 ? "" : " " + less_than_twenty[ones]);
        }
    }
            return less_than_twenty[num];
1
123
12345
1234567
"One Hundred Twenty Three"
"Twelve Thousand Three Hundred Forty Five"
"One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
"One Hundred Twenty Three"
"Twelve Thousand Three Hundred Forty Five"
"One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
