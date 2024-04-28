/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1998.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9990(t_small_parse_table_array *v)
{
	v->a[199800] = 9;
	v->a[199801] = sym_arithmetic_expansion;
	v->a[199802] = sym_brace_expression;
	v->a[199803] = sym_string;
	v->a[199804] = sym_translated_string;
	v->a[199805] = sym_number;
	v->a[199806] = sym_simple_expansion;
	v->a[199807] = sym_expansion;
	v->a[199808] = sym_command_substitution;
	v->a[199809] = sym_process_substitution;
	v->a[199810] = 19;
	v->a[199811] = actions(3);
	v->a[199812] = 1;
	v->a[199813] = sym_comment;
	v->a[199814] = actions(363);
	v->a[199815] = 1;
	v->a[199816] = anon_sym_DOLLAR_LBRACK;
	v->a[199817] = actions(367);
	v->a[199818] = 1;
	v->a[199819] = anon_sym_DOLLAR;
	small_parse_table_9991(v);
}

void	small_parse_table_9991(t_small_parse_table_array *v)
{
	v->a[199820] = actions(371);
	v->a[199821] = 1;
	v->a[199822] = anon_sym_DQUOTE;
	v->a[199823] = actions(375);
	v->a[199824] = 1;
	v->a[199825] = aux_sym_number_token1;
	v->a[199826] = actions(377);
	v->a[199827] = 1;
	v->a[199828] = aux_sym_number_token2;
	v->a[199829] = actions(379);
	v->a[199830] = 1;
	v->a[199831] = anon_sym_DOLLAR_LBRACE;
	v->a[199832] = actions(381);
	v->a[199833] = 1;
	v->a[199834] = anon_sym_DOLLAR_LPAREN;
	v->a[199835] = actions(385);
	v->a[199836] = 1;
	v->a[199837] = anon_sym_DOLLAR_BQUOTE;
	v->a[199838] = actions(391);
	v->a[199839] = 1;
	small_parse_table_9992(v);
}

void	small_parse_table_9992(t_small_parse_table_array *v)
{
	v->a[199840] = sym__brace_start;
	v->a[199841] = actions(5809);
	v->a[199842] = 1;
	v->a[199843] = anon_sym_BQUOTE;
	v->a[199844] = actions(8836);
	v->a[199845] = 1;
	v->a[199846] = sym_word;
	v->a[199847] = actions(8844);
	v->a[199848] = 1;
	v->a[199849] = sym_test_operator;
	v->a[199850] = actions(9082);
	v->a[199851] = 1;
	v->a[199852] = anon_sym_RBRACK;
	v->a[199853] = actions(352);
	v->a[199854] = 2;
	v->a[199855] = anon_sym_LPAREN_LPAREN;
	v->a[199856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199857] = actions(387);
	v->a[199858] = 2;
	v->a[199859] = anon_sym_LT_LPAREN;
	small_parse_table_9993(v);
}

void	small_parse_table_9993(t_small_parse_table_array *v)
{
	v->a[199860] = anon_sym_GT_LPAREN;
	v->a[199861] = actions(8840);
	v->a[199862] = 2;
	v->a[199863] = sym__special_character;
	v->a[199864] = sym__comment_word;
	v->a[199865] = actions(8842);
	v->a[199866] = 3;
	v->a[199867] = sym__bare_dollar;
	v->a[199868] = sym_raw_string;
	v->a[199869] = sym_ansi_c_string;
	v->a[199870] = state(2730);
	v->a[199871] = 9;
	v->a[199872] = sym_arithmetic_expansion;
	v->a[199873] = sym_brace_expression;
	v->a[199874] = sym_string;
	v->a[199875] = sym_translated_string;
	v->a[199876] = sym_number;
	v->a[199877] = sym_simple_expansion;
	v->a[199878] = sym_expansion;
	v->a[199879] = sym_command_substitution;
	small_parse_table_9994(v);
}

void	small_parse_table_9994(t_small_parse_table_array *v)
{
	v->a[199880] = sym_process_substitution;
	v->a[199881] = 19;
	v->a[199882] = actions(3);
	v->a[199883] = 1;
	v->a[199884] = sym_comment;
	v->a[199885] = actions(363);
	v->a[199886] = 1;
	v->a[199887] = anon_sym_DOLLAR_LBRACK;
	v->a[199888] = actions(367);
	v->a[199889] = 1;
	v->a[199890] = anon_sym_DOLLAR;
	v->a[199891] = actions(371);
	v->a[199892] = 1;
	v->a[199893] = anon_sym_DQUOTE;
	v->a[199894] = actions(375);
	v->a[199895] = 1;
	v->a[199896] = aux_sym_number_token1;
	v->a[199897] = actions(377);
	v->a[199898] = 1;
	v->a[199899] = aux_sym_number_token2;
	small_parse_table_9995(v);
}

/* EOF small_parse_table_1998.c */
