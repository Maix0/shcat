/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_658.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3290(t_small_parse_table_array *v)
{
	v->a[65800] = 1;
	v->a[65801] = anon_sym_BQUOTE;
	v->a[65802] = actions(2383);
	v->a[65803] = 1;
	v->a[65804] = sym__comment_word;
	v->a[65805] = actions(2385);
	v->a[65806] = 1;
	v->a[65807] = sym__empty_value;
	v->a[65808] = state(1060);
	v->a[65809] = 1;
	v->a[65810] = sym_concatenation;
	v->a[65811] = actions(2599);
	v->a[65812] = 3;
	v->a[65813] = sym_raw_string;
	v->a[65814] = sym_number;
	v->a[65815] = sym_word;
	v->a[65816] = state(1213);
	v->a[65817] = 5;
	v->a[65818] = sym_arithmetic_expansion;
	v->a[65819] = sym_string;
	small_parse_table_3291(v);
}

void	small_parse_table_3291(t_small_parse_table_array *v)
{
	v->a[65820] = sym_simple_expansion;
	v->a[65821] = sym_expansion;
	v->a[65822] = sym_command_substitution;
	v->a[65823] = 12;
	v->a[65824] = actions(3);
	v->a[65825] = 1;
	v->a[65826] = sym_comment;
	v->a[65827] = actions(2399);
	v->a[65828] = 1;
	v->a[65829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65830] = actions(2401);
	v->a[65831] = 1;
	v->a[65832] = anon_sym_DOLLAR;
	v->a[65833] = actions(2403);
	v->a[65834] = 1;
	v->a[65835] = anon_sym_DQUOTE;
	v->a[65836] = actions(2405);
	v->a[65837] = 1;
	v->a[65838] = anon_sym_DOLLAR_LBRACE;
	v->a[65839] = actions(2407);
	small_parse_table_3292(v);
}

void	small_parse_table_3292(t_small_parse_table_array *v)
{
	v->a[65840] = 1;
	v->a[65841] = anon_sym_DOLLAR_LPAREN;
	v->a[65842] = actions(2409);
	v->a[65843] = 1;
	v->a[65844] = anon_sym_BQUOTE;
	v->a[65845] = actions(2603);
	v->a[65846] = 1;
	v->a[65847] = sym__comment_word;
	v->a[65848] = actions(2605);
	v->a[65849] = 1;
	v->a[65850] = sym__empty_value;
	v->a[65851] = state(907);
	v->a[65852] = 1;
	v->a[65853] = sym_concatenation;
	v->a[65854] = actions(2601);
	v->a[65855] = 3;
	v->a[65856] = sym_raw_string;
	v->a[65857] = sym_number;
	v->a[65858] = sym_word;
	v->a[65859] = state(812);
	small_parse_table_3293(v);
}

void	small_parse_table_3293(t_small_parse_table_array *v)
{
	v->a[65860] = 5;
	v->a[65861] = sym_arithmetic_expansion;
	v->a[65862] = sym_string;
	v->a[65863] = sym_simple_expansion;
	v->a[65864] = sym_expansion;
	v->a[65865] = sym_command_substitution;
	v->a[65866] = 10;
	v->a[65867] = actions(3);
	v->a[65868] = 1;
	v->a[65869] = sym_comment;
	v->a[65870] = actions(2504);
	v->a[65871] = 1;
	v->a[65872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65873] = actions(2508);
	v->a[65874] = 1;
	v->a[65875] = anon_sym_DQUOTE;
	v->a[65876] = actions(2510);
	v->a[65877] = 1;
	v->a[65878] = anon_sym_DOLLAR_LBRACE;
	v->a[65879] = actions(2512);
	small_parse_table_3294(v);
}

void	small_parse_table_3294(t_small_parse_table_array *v)
{
	v->a[65880] = 1;
	v->a[65881] = anon_sym_DOLLAR_LPAREN;
	v->a[65882] = actions(2514);
	v->a[65883] = 1;
	v->a[65884] = anon_sym_BQUOTE;
	v->a[65885] = actions(2516);
	v->a[65886] = 1;
	v->a[65887] = sym__bare_dollar;
	v->a[65888] = actions(2558);
	v->a[65889] = 1;
	v->a[65890] = anon_sym_DOLLAR;
	v->a[65891] = actions(2502);
	v->a[65892] = 5;
	v->a[65893] = aux_sym_concatenation_token1;
	v->a[65894] = sym_raw_string;
	v->a[65895] = sym_number;
	v->a[65896] = sym__comment_word;
	v->a[65897] = sym_word;
	v->a[65898] = state(1383);
	v->a[65899] = 5;
	small_parse_table_3295(v);
}

/* EOF small_parse_table_658.c */
