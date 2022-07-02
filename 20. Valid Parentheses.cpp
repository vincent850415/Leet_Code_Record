class Solution {
public:
	bool isValid(string s)
	{
		stack<char> left;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{') left.push(s[i]);

			else
			{
				if (left.empty()) return false;

				char c = left.top();
				left.pop();

				if (s[i] == ')' && c == '(') continue;
				else if (s[i] == ']' && c == '[') continue;
				else if (s[i] == '}' && c == '{') continue;

				else return false;
			}
		}

		if (left.empty()) return true;
		else return false;
	}
};