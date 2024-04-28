/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2138.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10690(t_small_parse_table_array *v)
{
	v->a[213800] = sym_process_substitution;
	v->a[213801] = 18;
	v->a[213802] = actions(3);
	v->a[213803] = 1;
	v->a[213804] = sym_comment;
	v->a[213805] = actions(3886);
	v->a[213806] = 1;
	v->a[213807] = aux_sym_number_token1;
	v->a[213808] = actions(3888);
	v->a[213809] = 1;
	v->a[213810] = aux_sym_number_token2;
	v->a[213811] = actions(3892);
	v->a[213812] = 1;
	v->a[213813] = anon_sym_DOLLAR_LPAREN;
	v->a[213814] = actions(3902);
	v->a[213815] = 1;
	v->a[213816] = sym__brace_start;
	v->a[213817] = actions(8992);
	v->a[213818] = 1;
	v->a[213819] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10691(v);
}

void	small_parse_table_10691(t_small_parse_table_array *v)
{
	v->a[213820] = actions(8996);
	v->a[213821] = 1;
	v->a[213822] = anon_sym_DQUOTE;
	v->a[213823] = actions(9000);
	v->a[213824] = 1;
	v->a[213825] = anon_sym_DOLLAR_LBRACE;
	v->a[213826] = actions(9002);
	v->a[213827] = 1;
	v->a[213828] = anon_sym_BQUOTE;
	v->a[213829] = actions(9004);
	v->a[213830] = 1;
	v->a[213831] = anon_sym_DOLLAR_BQUOTE;
	v->a[213832] = actions(9740);
	v->a[213833] = 1;
	v->a[213834] = sym_word;
	v->a[213835] = actions(9746);
	v->a[213836] = 1;
	v->a[213837] = sym__comment_word;
	v->a[213838] = actions(10184);
	v->a[213839] = 1;
	small_parse_table_10692(v);
}

void	small_parse_table_10692(t_small_parse_table_array *v)
{
	v->a[213840] = anon_sym_DOLLAR;
	v->a[213841] = actions(8990);
	v->a[213842] = 2;
	v->a[213843] = anon_sym_LPAREN_LPAREN;
	v->a[213844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213845] = actions(9006);
	v->a[213846] = 2;
	v->a[213847] = anon_sym_LT_LPAREN;
	v->a[213848] = anon_sym_GT_LPAREN;
	v->a[213849] = actions(9742);
	v->a[213850] = 2;
	v->a[213851] = sym_test_operator;
	v->a[213852] = sym__special_character;
	v->a[213853] = actions(9744);
	v->a[213854] = 3;
	v->a[213855] = sym__bare_dollar;
	v->a[213856] = sym_raw_string;
	v->a[213857] = sym_ansi_c_string;
	v->a[213858] = state(2004);
	v->a[213859] = 9;
	small_parse_table_10693(v);
}

void	small_parse_table_10693(t_small_parse_table_array *v)
{
	v->a[213860] = sym_arithmetic_expansion;
	v->a[213861] = sym_brace_expression;
	v->a[213862] = sym_string;
	v->a[213863] = sym_translated_string;
	v->a[213864] = sym_number;
	v->a[213865] = sym_simple_expansion;
	v->a[213866] = sym_expansion;
	v->a[213867] = sym_command_substitution;
	v->a[213868] = sym_process_substitution;
	v->a[213869] = 21;
	v->a[213870] = actions(71);
	v->a[213871] = 1;
	v->a[213872] = sym_comment;
	v->a[213873] = actions(9364);
	v->a[213874] = 1;
	v->a[213875] = anon_sym_LPAREN;
	v->a[213876] = actions(9366);
	v->a[213877] = 1;
	v->a[213878] = anon_sym_BANG;
	v->a[213879] = actions(9372);
	small_parse_table_10694(v);
}

void	small_parse_table_10694(t_small_parse_table_array *v)
{
	v->a[213880] = 1;
	v->a[213881] = anon_sym_TILDE;
	v->a[213882] = actions(9374);
	v->a[213883] = 1;
	v->a[213884] = anon_sym_DOLLAR;
	v->a[213885] = actions(9376);
	v->a[213886] = 1;
	v->a[213887] = anon_sym_DQUOTE;
	v->a[213888] = actions(9378);
	v->a[213889] = 1;
	v->a[213890] = aux_sym_number_token1;
	v->a[213891] = actions(9380);
	v->a[213892] = 1;
	v->a[213893] = aux_sym_number_token2;
	v->a[213894] = actions(9382);
	v->a[213895] = 1;
	v->a[213896] = anon_sym_DOLLAR_LBRACE;
	v->a[213897] = actions(9384);
	v->a[213898] = 1;
	v->a[213899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10695(v);
}

/* EOF small_parse_table_2138.c */
