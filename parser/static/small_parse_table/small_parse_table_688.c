/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_688.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3440(t_small_parse_table_array *v)
{
	v->a[68800] = actions(451);
	v->a[68801] = 1;
	v->a[68802] = anon_sym_BQUOTE;
	v->a[68803] = actions(2559);
	v->a[68804] = 1;
	v->a[68805] = sym__bare_dollar;
	v->a[68806] = actions(2555);
	v->a[68807] = 5;
	v->a[68808] = aux_sym_concatenation_token1;
	v->a[68809] = sym_raw_string;
	v->a[68810] = sym_number;
	v->a[68811] = sym__comment_word;
	v->a[68812] = sym_word;
	v->a[68813] = state(554);
	v->a[68814] = 5;
	v->a[68815] = sym_arithmetic_expansion;
	v->a[68816] = sym_string;
	v->a[68817] = sym_simple_expansion;
	v->a[68818] = sym_expansion;
	v->a[68819] = sym_command_substitution;
	small_parse_table_3441(v);
}

void	small_parse_table_3441(t_small_parse_table_array *v)
{
	v->a[68820] = 5;
	v->a[68821] = actions(3);
	v->a[68822] = 1;
	v->a[68823] = sym_comment;
	v->a[68824] = actions(692);
	v->a[68825] = 1;
	v->a[68826] = anon_sym_PIPE;
	v->a[68827] = actions(995);
	v->a[68828] = 2;
	v->a[68829] = sym_file_descriptor;
	v->a[68830] = aux_sym_heredoc_redirect_token1;
	v->a[68831] = state(1354);
	v->a[68832] = 3;
	v->a[68833] = sym_file_redirect;
	v->a[68834] = sym_heredoc_redirect;
	v->a[68835] = aux_sym_redirected_statement_repeat1;
	v->a[68836] = actions(997);
	v->a[68837] = 11;
	v->a[68838] = anon_sym_AMP_AMP;
	v->a[68839] = anon_sym_PIPE_PIPE;
	small_parse_table_3442(v);
}

void	small_parse_table_3442(t_small_parse_table_array *v)
{
	v->a[68840] = anon_sym_LT;
	v->a[68841] = anon_sym_GT;
	v->a[68842] = anon_sym_GT_GT;
	v->a[68843] = anon_sym_LT_AMP;
	v->a[68844] = anon_sym_GT_AMP;
	v->a[68845] = anon_sym_GT_PIPE;
	v->a[68846] = anon_sym_LT_GT;
	v->a[68847] = anon_sym_LT_LT;
	v->a[68848] = anon_sym_LT_LT_DASH;
	v->a[68849] = 10;
	v->a[68850] = actions(3);
	v->a[68851] = 1;
	v->a[68852] = sym_comment;
	v->a[68853] = actions(1381);
	v->a[68854] = 1;
	v->a[68855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68856] = actions(1383);
	v->a[68857] = 1;
	v->a[68858] = anon_sym_DOLLAR;
	v->a[68859] = actions(1385);
	small_parse_table_3443(v);
}

void	small_parse_table_3443(t_small_parse_table_array *v)
{
	v->a[68860] = 1;
	v->a[68861] = anon_sym_DQUOTE;
	v->a[68862] = actions(1387);
	v->a[68863] = 1;
	v->a[68864] = anon_sym_DOLLAR_LBRACE;
	v->a[68865] = actions(1389);
	v->a[68866] = 1;
	v->a[68867] = anon_sym_DOLLAR_LPAREN;
	v->a[68868] = actions(1391);
	v->a[68869] = 1;
	v->a[68870] = anon_sym_BQUOTE;
	v->a[68871] = actions(2699);
	v->a[68872] = 1;
	v->a[68873] = sym__bare_dollar;
	v->a[68874] = actions(2695);
	v->a[68875] = 5;
	v->a[68876] = aux_sym_concatenation_token1;
	v->a[68877] = sym_raw_string;
	v->a[68878] = sym_number;
	v->a[68879] = sym__comment_word;
	small_parse_table_3444(v);
}

void	small_parse_table_3444(t_small_parse_table_array *v)
{
	v->a[68880] = sym_word;
	v->a[68881] = state(903);
	v->a[68882] = 5;
	v->a[68883] = sym_arithmetic_expansion;
	v->a[68884] = sym_string;
	v->a[68885] = sym_simple_expansion;
	v->a[68886] = sym_expansion;
	v->a[68887] = sym_command_substitution;
	v->a[68888] = 10;
	v->a[68889] = actions(3);
	v->a[68890] = 1;
	v->a[68891] = sym_comment;
	v->a[68892] = actions(55);
	v->a[68893] = 1;
	v->a[68894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68895] = actions(57);
	v->a[68896] = 1;
	v->a[68897] = anon_sym_DOLLAR;
	v->a[68898] = actions(59);
	v->a[68899] = 1;
	small_parse_table_3445(v);
}

/* EOF small_parse_table_688.c */
