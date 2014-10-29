// Copyright 2014 Samsung Electronics Co., Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

var e;

e = new Error ();
assert (e.name === "Error");
assert (e.message === "");
assert (e.toString() === "Error: ");

e = new Error("some message");
assert (e.name === "Error");
assert (e.message === "some message");
assert (e.toString() === "Error: some message");


assert (Error.prototype.toString !== Object.prototype.toString);
assert (Error.prototype.constructor === Error);
assert (Error.prototype.name === "Error");
assert (Error.prototype.message === "");
assert (Error.prototype.toString() === "Error: ");
