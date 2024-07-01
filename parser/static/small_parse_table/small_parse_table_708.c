/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_708.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3540(t_small_parse_table_array *v)
{
	v->a[70800] = actions(2346);
	v->a[70801] = 1;
	v->a[70802] = anon_sym_DOLLAR_LBRACE;
	v->a[70803] = actions(2348);
	v->a[70804] = 1;
	v->a[70805] = anon_sym_DOLLAR_LPAREN;
	v->a[70806] = actions(2350);
	v->a[70807] = 1;
	v->a[70808] = anon_sym_BQUOTE;
	v->a[70809] = actions(2392);
	v->a[70810] = 1;
	v->a[70811] = anon_sym_DOLLAR;
	v->a[70812] = state(504);
	v->a[70813] = 2;
	v->a[70814] = sym_concatenation;
	v->a[70815] = aux_sym_for_statement_repeat1;
	v->a[70816] = actions(2774);
	v->a[70817] = 3;
	v->a[70818] = sym_raw_string;
	v->a[70819] = sym_number;
	small_parse_table_3541(v);
}

void	small_parse_table_3541(t_small_parse_table_array *v)
{
	v->a[70820] = sym_word;
	v->a[70821] = state(782);
	v->a[70822] = 5;
	v->a[70823] = sym_arithmetic_expansion;
	v->a[70824] = sym_string;
	v->a[70825] = sym_simple_expansion;
	v->a[70826] = sym_expansion;
	v->a[70827] = sym_command_substitution;
	v->a[70828] = 10;
	v->a[70829] = actions(3);
	v->a[70830] = 1;
	v->a[70831] = sym_comment;
	v->a[70832] = actions(2400);
	v->a[70833] = 1;
	v->a[70834] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70835] = actions(2404);
	v->a[70836] = 1;
	v->a[70837] = anon_sym_DQUOTE;
	v->a[70838] = actions(2406);
	v->a[70839] = 1;
	small_parse_table_3542(v);
}

void	small_parse_table_3542(t_small_parse_table_array *v)
{
	v->a[70840] = anon_sym_DOLLAR_LBRACE;
	v->a[70841] = actions(2408);
	v->a[70842] = 1;
	v->a[70843] = anon_sym_DOLLAR_LPAREN;
	v->a[70844] = actions(2410);
	v->a[70845] = 1;
	v->a[70846] = anon_sym_BQUOTE;
	v->a[70847] = actions(2532);
	v->a[70848] = 1;
	v->a[70849] = anon_sym_DOLLAR;
	v->a[70850] = state(377);
	v->a[70851] = 2;
	v->a[70852] = sym_concatenation;
	v->a[70853] = aux_sym_for_statement_repeat1;
	v->a[70854] = actions(2714);
	v->a[70855] = 3;
	v->a[70856] = sym_raw_string;
	v->a[70857] = sym_number;
	v->a[70858] = sym_word;
	v->a[70859] = state(751);
	small_parse_table_3543(v);
}

void	small_parse_table_3543(t_small_parse_table_array *v)
{
	v->a[70860] = 5;
	v->a[70861] = sym_arithmetic_expansion;
	v->a[70862] = sym_string;
	v->a[70863] = sym_simple_expansion;
	v->a[70864] = sym_expansion;
	v->a[70865] = sym_command_substitution;
	v->a[70866] = 10;
	v->a[70867] = actions(3);
	v->a[70868] = 1;
	v->a[70869] = sym_comment;
	v->a[70870] = actions(2490);
	v->a[70871] = 1;
	v->a[70872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70873] = actions(2492);
	v->a[70874] = 1;
	v->a[70875] = anon_sym_DOLLAR;
	v->a[70876] = actions(2494);
	v->a[70877] = 1;
	v->a[70878] = anon_sym_DQUOTE;
	v->a[70879] = actions(2496);
	small_parse_table_3544(v);
}

void	small_parse_table_3544(t_small_parse_table_array *v)
{
	v->a[70880] = 1;
	v->a[70881] = anon_sym_DOLLAR_LBRACE;
	v->a[70882] = actions(2498);
	v->a[70883] = 1;
	v->a[70884] = anon_sym_DOLLAR_LPAREN;
	v->a[70885] = actions(2500);
	v->a[70886] = 1;
	v->a[70887] = anon_sym_BQUOTE;
	v->a[70888] = state(877);
	v->a[70889] = 2;
	v->a[70890] = sym_concatenation;
	v->a[70891] = aux_sym_for_statement_repeat1;
	v->a[70892] = actions(2776);
	v->a[70893] = 3;
	v->a[70894] = sym_raw_string;
	v->a[70895] = sym_number;
	v->a[70896] = sym_word;
	v->a[70897] = state(1048);
	v->a[70898] = 5;
	v->a[70899] = sym_arithmetic_expansion;
	small_parse_table_3545(v);
}

/* EOF small_parse_table_708.c */
