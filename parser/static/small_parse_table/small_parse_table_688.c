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
	v->a[68800] = actions(1074);
	v->a[68801] = 1;
	v->a[68802] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68803] = actions(1076);
	v->a[68804] = 1;
	v->a[68805] = anon_sym_DOLLAR;
	v->a[68806] = actions(1078);
	v->a[68807] = 1;
	v->a[68808] = anon_sym_DQUOTE;
	v->a[68809] = actions(1080);
	v->a[68810] = 1;
	v->a[68811] = anon_sym_DOLLAR_LBRACE;
	v->a[68812] = actions(1082);
	v->a[68813] = 1;
	v->a[68814] = anon_sym_DOLLAR_LPAREN;
	v->a[68815] = actions(1084);
	v->a[68816] = 1;
	v->a[68817] = anon_sym_BQUOTE;
	v->a[68818] = actions(2696);
	v->a[68819] = 1;
	small_parse_table_3441(v);
}

void	small_parse_table_3441(t_small_parse_table_array *v)
{
	v->a[68820] = aux_sym_heredoc_redirect_token1;
	v->a[68821] = state(1338);
	v->a[68822] = 1;
	v->a[68823] = aux_sym__heredoc_command;
	v->a[68824] = state(1721);
	v->a[68825] = 1;
	v->a[68826] = sym_concatenation;
	v->a[68827] = actions(1064);
	v->a[68828] = 3;
	v->a[68829] = sym_raw_string;
	v->a[68830] = sym_number;
	v->a[68831] = sym_word;
	v->a[68832] = state(1573);
	v->a[68833] = 5;
	v->a[68834] = sym_arithmetic_expansion;
	v->a[68835] = sym_string;
	v->a[68836] = sym_simple_expansion;
	v->a[68837] = sym_expansion;
	v->a[68838] = sym_command_substitution;
	v->a[68839] = 7;
	small_parse_table_3442(v);
}

void	small_parse_table_3442(t_small_parse_table_array *v)
{
	v->a[68840] = actions(3);
	v->a[68841] = 1;
	v->a[68842] = sym_comment;
	v->a[68843] = actions(1923);
	v->a[68844] = 1;
	v->a[68845] = aux_sym_heredoc_redirect_token1;
	v->a[68846] = actions(2701);
	v->a[68847] = 1;
	v->a[68848] = sym_file_descriptor;
	v->a[68849] = actions(1930);
	v->a[68850] = 2;
	v->a[68851] = anon_sym_LT_LT;
	v->a[68852] = anon_sym_LT_LT_DASH;
	v->a[68853] = actions(1925);
	v->a[68854] = 3;
	v->a[68855] = anon_sym_PIPE;
	v->a[68856] = anon_sym_AMP_AMP;
	v->a[68857] = anon_sym_PIPE_PIPE;
	v->a[68858] = state(1350);
	v->a[68859] = 3;
	small_parse_table_3443(v);
}

void	small_parse_table_3443(t_small_parse_table_array *v)
{
	v->a[68860] = sym_file_redirect;
	v->a[68861] = sym_heredoc_redirect;
	v->a[68862] = aux_sym_redirected_statement_repeat1;
	v->a[68863] = actions(2698);
	v->a[68864] = 7;
	v->a[68865] = anon_sym_LT;
	v->a[68866] = anon_sym_GT;
	v->a[68867] = anon_sym_GT_GT;
	v->a[68868] = anon_sym_LT_AMP;
	v->a[68869] = anon_sym_GT_AMP;
	v->a[68870] = anon_sym_GT_PIPE;
	v->a[68871] = anon_sym_LT_GT;
	v->a[68872] = 10;
	v->a[68873] = actions(3);
	v->a[68874] = 1;
	v->a[68875] = sym_comment;
	v->a[68876] = actions(2574);
	v->a[68877] = 1;
	v->a[68878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68879] = actions(2578);
	small_parse_table_3444(v);
}

void	small_parse_table_3444(t_small_parse_table_array *v)
{
	v->a[68880] = 1;
	v->a[68881] = anon_sym_DQUOTE;
	v->a[68882] = actions(2580);
	v->a[68883] = 1;
	v->a[68884] = anon_sym_DOLLAR_LBRACE;
	v->a[68885] = actions(2582);
	v->a[68886] = 1;
	v->a[68887] = anon_sym_DOLLAR_LPAREN;
	v->a[68888] = actions(2584);
	v->a[68889] = 1;
	v->a[68890] = anon_sym_BQUOTE;
	v->a[68891] = actions(2586);
	v->a[68892] = 1;
	v->a[68893] = sym__bare_dollar;
	v->a[68894] = actions(2704);
	v->a[68895] = 1;
	v->a[68896] = anon_sym_DOLLAR;
	v->a[68897] = actions(2572);
	v->a[68898] = 5;
	v->a[68899] = aux_sym_concatenation_token1;
	small_parse_table_3445(v);
}

/* EOF small_parse_table_688.c */
