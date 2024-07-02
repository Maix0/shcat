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
	v->a[65800] = sym__comment_word;
	v->a[65801] = actions(2394);
	v->a[65802] = 1;
	v->a[65803] = sym__empty_value;
	v->a[65804] = state(1199);
	v->a[65805] = 1;
	v->a[65806] = sym_concatenation;
	v->a[65807] = actions(2378);
	v->a[65808] = 3;
	v->a[65809] = sym_raw_string;
	v->a[65810] = sym_number;
	v->a[65811] = sym_word;
	v->a[65812] = state(953);
	v->a[65813] = 5;
	v->a[65814] = sym_arithmetic_expansion;
	v->a[65815] = sym_string;
	v->a[65816] = sym_simple_expansion;
	v->a[65817] = sym_expansion;
	v->a[65818] = sym_command_substitution;
	v->a[65819] = 10;
	small_parse_table_3291(v);
}

void	small_parse_table_3291(t_small_parse_table_array *v)
{
	v->a[65820] = actions(3);
	v->a[65821] = 1;
	v->a[65822] = sym_comment;
	v->a[65823] = actions(770);
	v->a[65824] = 1;
	v->a[65825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65826] = actions(774);
	v->a[65827] = 1;
	v->a[65828] = anon_sym_DQUOTE;
	v->a[65829] = actions(776);
	v->a[65830] = 1;
	v->a[65831] = anon_sym_DOLLAR_LBRACE;
	v->a[65832] = actions(778);
	v->a[65833] = 1;
	v->a[65834] = anon_sym_DOLLAR_LPAREN;
	v->a[65835] = actions(780);
	v->a[65836] = 1;
	v->a[65837] = anon_sym_BQUOTE;
	v->a[65838] = actions(2398);
	v->a[65839] = 1;
	small_parse_table_3292(v);
}

void	small_parse_table_3292(t_small_parse_table_array *v)
{
	v->a[65840] = anon_sym_DOLLAR;
	v->a[65841] = actions(2400);
	v->a[65842] = 1;
	v->a[65843] = sym__bare_dollar;
	v->a[65844] = actions(2396);
	v->a[65845] = 5;
	v->a[65846] = aux_sym_concatenation_token1;
	v->a[65847] = sym_raw_string;
	v->a[65848] = sym_number;
	v->a[65849] = sym__comment_word;
	v->a[65850] = sym_word;
	v->a[65851] = state(569);
	v->a[65852] = 5;
	v->a[65853] = sym_arithmetic_expansion;
	v->a[65854] = sym_string;
	v->a[65855] = sym_simple_expansion;
	v->a[65856] = sym_expansion;
	v->a[65857] = sym_command_substitution;
	v->a[65858] = 10;
	v->a[65859] = actions(3);
	small_parse_table_3293(v);
}

void	small_parse_table_3293(t_small_parse_table_array *v)
{
	v->a[65860] = 1;
	v->a[65861] = sym_comment;
	v->a[65862] = actions(463);
	v->a[65863] = 1;
	v->a[65864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65865] = actions(465);
	v->a[65866] = 1;
	v->a[65867] = anon_sym_DOLLAR;
	v->a[65868] = actions(467);
	v->a[65869] = 1;
	v->a[65870] = anon_sym_DQUOTE;
	v->a[65871] = actions(469);
	v->a[65872] = 1;
	v->a[65873] = anon_sym_DOLLAR_LBRACE;
	v->a[65874] = actions(471);
	v->a[65875] = 1;
	v->a[65876] = anon_sym_DOLLAR_LPAREN;
	v->a[65877] = actions(473);
	v->a[65878] = 1;
	v->a[65879] = anon_sym_BQUOTE;
	small_parse_table_3294(v);
}

void	small_parse_table_3294(t_small_parse_table_array *v)
{
	v->a[65880] = actions(2404);
	v->a[65881] = 1;
	v->a[65882] = sym__bare_dollar;
	v->a[65883] = actions(2402);
	v->a[65884] = 5;
	v->a[65885] = aux_sym_concatenation_token1;
	v->a[65886] = sym_raw_string;
	v->a[65887] = sym_number;
	v->a[65888] = sym__comment_word;
	v->a[65889] = sym_word;
	v->a[65890] = state(533);
	v->a[65891] = 5;
	v->a[65892] = sym_arithmetic_expansion;
	v->a[65893] = sym_string;
	v->a[65894] = sym_simple_expansion;
	v->a[65895] = sym_expansion;
	v->a[65896] = sym_command_substitution;
	v->a[65897] = 11;
	v->a[65898] = actions(3);
	v->a[65899] = 1;
	small_parse_table_3295(v);
}

/* EOF small_parse_table_658.c */
