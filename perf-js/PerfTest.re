/**
 * Copyright (c) 2017 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
/*
ReUnit.run (SetPerfTester.test 5 100000);
print_newline ();
*/

ReUnit.run (MapPerfTester.test 5 1000000);
print_newline ();

ReUnit.run (VectorPerfTester.test 5 1000000);
print_newline ();
