/*
 * Copyright (c) 2018, Christopher Durand
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------

#include <unittest/testsuite.hpp>

class ArithmeticTraitsTest : public unittest::TestSuite
{
public:
	void
	testMinMax();

	void
	testDigits();

	void
	testWideType();

	void
	testSignedUnsigned();
};
