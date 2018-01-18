// Copyright 2016-2018 The RamFuzz contributors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <vector>
namespace ns1 {

class A {
public:
  int f() const { return 10; }
};

class B {
  int sum = 0;

public:
  int get() const { return sum; }
  void g(const std::vector<A> &v) { sum |= v.size() ? v[0].f() - 5 : 5; }
};

} // namespace ns1
