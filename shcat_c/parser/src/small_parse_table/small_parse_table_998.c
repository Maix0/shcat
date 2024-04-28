/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_998.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4990(t_small_parse_table_array *v)
{
	v->a[99800] = sym_raw_string;
	v->a[99801] = sym_ansi_c_string;
	v->a[99802] = aux_sym_number_token1;
	v->a[99803] = aux_sym_number_token2;
	v->a[99804] = anon_sym_DOLLAR_LBRACE;
	v->a[99805] = anon_sym_DOLLAR_LPAREN;
	v->a[99806] = anon_sym_BQUOTE;
	v->a[99807] = anon_sym_DOLLAR_BQUOTE;
	v->a[99808] = anon_sym_LT_LPAREN;
	v->a[99809] = anon_sym_GT_LPAREN;
	v->a[99810] = sym_word;
	v->a[99811] = 3;
	v->a[99812] = actions(3);
	v->a[99813] = 1;
	v->a[99814] = sym_comment;
	v->a[99815] = actions(1306);
	v->a[99816] = 5;
	v->a[99817] = sym_file_descriptor;
	v->a[99818] = sym__concat;
	v->a[99819] = sym_test_operator;
	small_parse_table_4991(v);
}

void	small_parse_table_4991(t_small_parse_table_array *v)
{
	v->a[99820] = sym__brace_start;
	v->a[99821] = aux_sym_heredoc_redirect_token1;
	v->a[99822] = actions(1304);
	v->a[99823] = 38;
	v->a[99824] = anon_sym_LPAREN_LPAREN;
	v->a[99825] = anon_sym_SEMI;
	v->a[99826] = anon_sym_PIPE_PIPE;
	v->a[99827] = anon_sym_AMP_AMP;
	v->a[99828] = anon_sym_PIPE;
	v->a[99829] = anon_sym_AMP;
	v->a[99830] = anon_sym_LT;
	v->a[99831] = anon_sym_GT;
	v->a[99832] = anon_sym_LT_LT;
	v->a[99833] = anon_sym_GT_GT;
	v->a[99834] = anon_sym_RPAREN;
	v->a[99835] = anon_sym_SEMI_SEMI;
	v->a[99836] = anon_sym_PIPE_AMP;
	v->a[99837] = anon_sym_AMP_GT;
	v->a[99838] = anon_sym_AMP_GT_GT;
	v->a[99839] = anon_sym_LT_AMP;
	small_parse_table_4992(v);
}

void	small_parse_table_4992(t_small_parse_table_array *v)
{
	v->a[99840] = anon_sym_GT_AMP;
	v->a[99841] = anon_sym_GT_PIPE;
	v->a[99842] = anon_sym_LT_AMP_DASH;
	v->a[99843] = anon_sym_GT_AMP_DASH;
	v->a[99844] = anon_sym_LT_LT_DASH;
	v->a[99845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99846] = anon_sym_DOLLAR_LBRACK;
	v->a[99847] = aux_sym_concatenation_token1;
	v->a[99848] = anon_sym_DOLLAR;
	v->a[99849] = sym__special_character;
	v->a[99850] = anon_sym_DQUOTE;
	v->a[99851] = sym_raw_string;
	v->a[99852] = sym_ansi_c_string;
	v->a[99853] = aux_sym_number_token1;
	v->a[99854] = aux_sym_number_token2;
	v->a[99855] = anon_sym_DOLLAR_LBRACE;
	v->a[99856] = anon_sym_DOLLAR_LPAREN;
	v->a[99857] = anon_sym_BQUOTE;
	v->a[99858] = anon_sym_DOLLAR_BQUOTE;
	v->a[99859] = anon_sym_LT_LPAREN;
	small_parse_table_4993(v);
}

void	small_parse_table_4993(t_small_parse_table_array *v)
{
	v->a[99860] = anon_sym_GT_LPAREN;
	v->a[99861] = sym_word;
	v->a[99862] = 26;
	v->a[99863] = actions(71);
	v->a[99864] = 1;
	v->a[99865] = sym_comment;
	v->a[99866] = actions(363);
	v->a[99867] = 1;
	v->a[99868] = anon_sym_DOLLAR_LBRACK;
	v->a[99869] = actions(367);
	v->a[99870] = 1;
	v->a[99871] = anon_sym_DOLLAR;
	v->a[99872] = actions(371);
	v->a[99873] = 1;
	v->a[99874] = anon_sym_DQUOTE;
	v->a[99875] = actions(375);
	v->a[99876] = 1;
	v->a[99877] = aux_sym_number_token1;
	v->a[99878] = actions(377);
	v->a[99879] = 1;
	small_parse_table_4994(v);
}

void	small_parse_table_4994(t_small_parse_table_array *v)
{
	v->a[99880] = aux_sym_number_token2;
	v->a[99881] = actions(379);
	v->a[99882] = 1;
	v->a[99883] = anon_sym_DOLLAR_LBRACE;
	v->a[99884] = actions(381);
	v->a[99885] = 1;
	v->a[99886] = anon_sym_DOLLAR_LPAREN;
	v->a[99887] = actions(385);
	v->a[99888] = 1;
	v->a[99889] = anon_sym_DOLLAR_BQUOTE;
	v->a[99890] = actions(391);
	v->a[99891] = 1;
	v->a[99892] = sym__brace_start;
	v->a[99893] = actions(1091);
	v->a[99894] = 1;
	v->a[99895] = sym_word;
	v->a[99896] = actions(1093);
	v->a[99897] = 1;
	v->a[99898] = anon_sym_LPAREN;
	v->a[99899] = actions(1095);
	small_parse_table_4995(v);
}

/* EOF small_parse_table_998.c */
