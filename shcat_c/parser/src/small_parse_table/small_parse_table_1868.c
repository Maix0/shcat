/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1868.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9340(t_small_parse_table_array *v)
{
	v->a[186800] = sym__brace_start;
	v->a[186801] = anon_sym_LPAREN_LPAREN;
	v->a[186802] = anon_sym_GT_GT;
	v->a[186803] = anon_sym_AMP_GT_GT;
	v->a[186804] = anon_sym_GT_PIPE;
	v->a[186805] = anon_sym_LT_AMP_DASH;
	v->a[186806] = anon_sym_GT_AMP_DASH;
	v->a[186807] = anon_sym_LT_LT_LT;
	v->a[186808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186809] = anon_sym_DOLLAR_LBRACK;
	v->a[186810] = sym__special_character;
	v->a[186811] = anon_sym_DQUOTE;
	v->a[186812] = sym_raw_string;
	v->a[186813] = sym_ansi_c_string;
	v->a[186814] = anon_sym_DOLLAR_LBRACE;
	v->a[186815] = anon_sym_DOLLAR_BQUOTE;
	v->a[186816] = anon_sym_LT_LPAREN;
	v->a[186817] = anon_sym_GT_LPAREN;
	v->a[186818] = 8;
	v->a[186819] = actions(3);
	small_parse_table_9341(v);
}

void	small_parse_table_9341(t_small_parse_table_array *v)
{
	v->a[186820] = 1;
	v->a[186821] = sym_comment;
	v->a[186822] = actions(3735);
	v->a[186823] = 1;
	v->a[186824] = anon_sym_DQUOTE;
	v->a[186825] = actions(7757);
	v->a[186826] = 1;
	v->a[186827] = sym_variable_name;
	v->a[186828] = state(4808);
	v->a[186829] = 1;
	v->a[186830] = sym_string;
	v->a[186831] = actions(1241);
	v->a[186832] = 2;
	v->a[186833] = sym_test_operator;
	v->a[186834] = sym__brace_start;
	v->a[186835] = actions(7755);
	v->a[186836] = 2;
	v->a[186837] = aux_sym__simple_variable_name_token1;
	v->a[186838] = aux_sym__multiline_variable_name_token1;
	v->a[186839] = actions(7753);
	small_parse_table_9342(v);
}

void	small_parse_table_9342(t_small_parse_table_array *v)
{
	v->a[186840] = 9;
	v->a[186841] = anon_sym_DASH;
	v->a[186842] = anon_sym_STAR;
	v->a[186843] = anon_sym_BANG;
	v->a[186844] = anon_sym_QMARK;
	v->a[186845] = anon_sym_DOLLAR;
	v->a[186846] = anon_sym_POUND;
	v->a[186847] = anon_sym_AT2;
	v->a[186848] = anon_sym_0;
	v->a[186849] = anon_sym__;
	v->a[186850] = actions(1239);
	v->a[186851] = 19;
	v->a[186852] = anon_sym_LPAREN_LPAREN;
	v->a[186853] = anon_sym_SEMI;
	v->a[186854] = anon_sym_AMP;
	v->a[186855] = anon_sym_SEMI_SEMI;
	v->a[186856] = aux_sym_heredoc_redirect_token1;
	v->a[186857] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[186858] = anon_sym_DOLLAR_LBRACK;
	v->a[186859] = sym__special_character;
	small_parse_table_9343(v);
}

void	small_parse_table_9343(t_small_parse_table_array *v)
{
	v->a[186860] = sym_raw_string;
	v->a[186861] = sym_ansi_c_string;
	v->a[186862] = aux_sym_number_token1;
	v->a[186863] = aux_sym_number_token2;
	v->a[186864] = anon_sym_DOLLAR_LBRACE;
	v->a[186865] = anon_sym_DOLLAR_LPAREN;
	v->a[186866] = anon_sym_BQUOTE;
	v->a[186867] = anon_sym_DOLLAR_BQUOTE;
	v->a[186868] = anon_sym_LT_LPAREN;
	v->a[186869] = anon_sym_GT_LPAREN;
	v->a[186870] = sym_word;
	v->a[186871] = 21;
	v->a[186872] = actions(3);
	v->a[186873] = 1;
	v->a[186874] = sym_comment;
	v->a[186875] = actions(3729);
	v->a[186876] = 1;
	v->a[186877] = anon_sym_DOLLAR_LBRACK;
	v->a[186878] = actions(3731);
	v->a[186879] = 1;
	small_parse_table_9344(v);
}

void	small_parse_table_9344(t_small_parse_table_array *v)
{
	v->a[186880] = anon_sym_DOLLAR;
	v->a[186881] = actions(3735);
	v->a[186882] = 1;
	v->a[186883] = anon_sym_DQUOTE;
	v->a[186884] = actions(3737);
	v->a[186885] = 1;
	v->a[186886] = aux_sym_number_token1;
	v->a[186887] = actions(3739);
	v->a[186888] = 1;
	v->a[186889] = aux_sym_number_token2;
	v->a[186890] = actions(3741);
	v->a[186891] = 1;
	v->a[186892] = anon_sym_DOLLAR_LBRACE;
	v->a[186893] = actions(3743);
	v->a[186894] = 1;
	v->a[186895] = anon_sym_DOLLAR_LPAREN;
	v->a[186896] = actions(3745);
	v->a[186897] = 1;
	v->a[186898] = anon_sym_BQUOTE;
	v->a[186899] = actions(3747);
	small_parse_table_9345(v);
}

/* EOF small_parse_table_1868.c */
