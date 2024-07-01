/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_497.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2485(t_small_parse_table_array *v)
{
	v->a[49700] = actions(3);
	v->a[49701] = 1;
	v->a[49702] = sym_comment;
	v->a[49703] = actions(1686);
	v->a[49704] = 1;
	v->a[49705] = ts_builtin_sym_end;
	v->a[49706] = actions(1577);
	v->a[49707] = 2;
	v->a[49708] = sym_file_descriptor;
	v->a[49709] = sym_variable_name;
	v->a[49710] = actions(1573);
	v->a[49711] = 25;
	v->a[49712] = anon_sym_for;
	v->a[49713] = anon_sym_while;
	v->a[49714] = anon_sym_until;
	v->a[49715] = anon_sym_if;
	v->a[49716] = anon_sym_case;
	v->a[49717] = anon_sym_LPAREN;
	v->a[49718] = anon_sym_LBRACE;
	v->a[49719] = anon_sym_BANG;
	small_parse_table_2486(v);
}

void	small_parse_table_2486(t_small_parse_table_array *v)
{
	v->a[49720] = anon_sym_LT;
	v->a[49721] = anon_sym_GT;
	v->a[49722] = anon_sym_GT_GT;
	v->a[49723] = anon_sym_LT_AMP;
	v->a[49724] = anon_sym_GT_AMP;
	v->a[49725] = anon_sym_GT_PIPE;
	v->a[49726] = anon_sym_LT_AMP_DASH;
	v->a[49727] = anon_sym_GT_AMP_DASH;
	v->a[49728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49729] = anon_sym_DOLLAR;
	v->a[49730] = anon_sym_DQUOTE;
	v->a[49731] = sym_raw_string;
	v->a[49732] = sym_number;
	v->a[49733] = anon_sym_DOLLAR_LBRACE;
	v->a[49734] = anon_sym_DOLLAR_LPAREN;
	v->a[49735] = anon_sym_BQUOTE;
	v->a[49736] = sym_word;
	v->a[49737] = 12;
	v->a[49738] = actions(3);
	v->a[49739] = 1;
	small_parse_table_2487(v);
}

void	small_parse_table_2487(t_small_parse_table_array *v)
{
	v->a[49740] = sym_comment;
	v->a[49741] = actions(577);
	v->a[49742] = 1;
	v->a[49743] = sym_file_descriptor;
	v->a[49744] = actions(1724);
	v->a[49745] = 1;
	v->a[49746] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49747] = actions(1727);
	v->a[49748] = 1;
	v->a[49749] = anon_sym_DOLLAR;
	v->a[49750] = actions(1730);
	v->a[49751] = 1;
	v->a[49752] = anon_sym_DQUOTE;
	v->a[49753] = actions(1733);
	v->a[49754] = 1;
	v->a[49755] = anon_sym_DOLLAR_LBRACE;
	v->a[49756] = actions(1736);
	v->a[49757] = 1;
	v->a[49758] = anon_sym_DOLLAR_LPAREN;
	v->a[49759] = actions(1739);
	small_parse_table_2488(v);
}

void	small_parse_table_2488(t_small_parse_table_array *v)
{
	v->a[49760] = 1;
	v->a[49761] = anon_sym_BQUOTE;
	v->a[49762] = state(793);
	v->a[49763] = 2;
	v->a[49764] = sym_concatenation;
	v->a[49765] = aux_sym_for_statement_repeat1;
	v->a[49766] = actions(1721);
	v->a[49767] = 3;
	v->a[49768] = sym_raw_string;
	v->a[49769] = sym_number;
	v->a[49770] = sym_word;
	v->a[49771] = state(1003);
	v->a[49772] = 5;
	v->a[49773] = sym_arithmetic_expansion;
	v->a[49774] = sym_string;
	v->a[49775] = sym_simple_expansion;
	v->a[49776] = sym_expansion;
	v->a[49777] = sym_command_substitution;
	v->a[49778] = actions(582);
	v->a[49779] = 11;
	small_parse_table_2489(v);
}

void	small_parse_table_2489(t_small_parse_table_array *v)
{
	v->a[49780] = anon_sym_AMP_AMP;
	v->a[49781] = anon_sym_PIPE_PIPE;
	v->a[49782] = anon_sym_LT;
	v->a[49783] = anon_sym_GT;
	v->a[49784] = anon_sym_GT_GT;
	v->a[49785] = anon_sym_LT_AMP;
	v->a[49786] = anon_sym_GT_AMP;
	v->a[49787] = anon_sym_GT_PIPE;
	v->a[49788] = anon_sym_LT_AMP_DASH;
	v->a[49789] = anon_sym_GT_AMP_DASH;
	v->a[49790] = aux_sym_heredoc_redirect_token1;
	v->a[49791] = 5;
	v->a[49792] = actions(3);
	v->a[49793] = 1;
	v->a[49794] = sym_comment;
	v->a[49795] = actions(690);
	v->a[49796] = 1;
	v->a[49797] = sym_variable_name;
	v->a[49798] = actions(1555);
	v->a[49799] = 1;
	small_parse_table_2490(v);
}

/* EOF small_parse_table_497.c */
