/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_447.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2235(t_small_parse_table_array *v)
{
	v->a[44700] = sym__special_character;
	v->a[44701] = anon_sym_DQUOTE;
	v->a[44702] = sym_raw_string;
	v->a[44703] = sym_ansi_c_string;
	v->a[44704] = aux_sym_number_token1;
	v->a[44705] = aux_sym_number_token2;
	v->a[44706] = anon_sym_DOLLAR_LBRACE;
	v->a[44707] = anon_sym_DOLLAR_LPAREN;
	v->a[44708] = anon_sym_BQUOTE;
	v->a[44709] = anon_sym_DOLLAR_BQUOTE;
	v->a[44710] = anon_sym_LT_LPAREN;
	v->a[44711] = anon_sym_GT_LPAREN;
	v->a[44712] = sym_word;
	v->a[44713] = 6;
	v->a[44714] = actions(3);
	v->a[44715] = 1;
	v->a[44716] = sym_comment;
	v->a[44717] = actions(5182);
	v->a[44718] = 1;
	v->a[44719] = aux_sym_concatenation_token1;
	small_parse_table_2236(v);
}

void	small_parse_table_2236(t_small_parse_table_array *v)
{
	v->a[44720] = actions(5245);
	v->a[44721] = 1;
	v->a[44722] = sym__concat;
	v->a[44723] = state(1074);
	v->a[44724] = 1;
	v->a[44725] = aux_sym_concatenation_repeat1;
	v->a[44726] = actions(2074);
	v->a[44727] = 5;
	v->a[44728] = sym_file_descriptor;
	v->a[44729] = sym_variable_name;
	v->a[44730] = sym_test_operator;
	v->a[44731] = sym__brace_start;
	v->a[44732] = aux_sym_heredoc_redirect_token1;
	v->a[44733] = actions(2072);
	v->a[44734] = 40;
	v->a[44735] = anon_sym_LPAREN_LPAREN;
	v->a[44736] = anon_sym_SEMI;
	v->a[44737] = anon_sym_PIPE_PIPE;
	v->a[44738] = anon_sym_AMP_AMP;
	v->a[44739] = anon_sym_PIPE;
	small_parse_table_2237(v);
}

void	small_parse_table_2237(t_small_parse_table_array *v)
{
	v->a[44740] = anon_sym_AMP;
	v->a[44741] = anon_sym_LT;
	v->a[44742] = anon_sym_GT;
	v->a[44743] = anon_sym_LT_LT;
	v->a[44744] = anon_sym_GT_GT;
	v->a[44745] = anon_sym_esac;
	v->a[44746] = anon_sym_SEMI_SEMI;
	v->a[44747] = anon_sym_SEMI_AMP;
	v->a[44748] = anon_sym_SEMI_SEMI_AMP;
	v->a[44749] = anon_sym_PIPE_AMP;
	v->a[44750] = anon_sym_AMP_GT;
	v->a[44751] = anon_sym_AMP_GT_GT;
	v->a[44752] = anon_sym_LT_AMP;
	v->a[44753] = anon_sym_GT_AMP;
	v->a[44754] = anon_sym_GT_PIPE;
	v->a[44755] = anon_sym_LT_AMP_DASH;
	v->a[44756] = anon_sym_GT_AMP_DASH;
	v->a[44757] = anon_sym_LT_LT_DASH;
	v->a[44758] = anon_sym_LT_LT_LT;
	v->a[44759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2238(v);
}

void	small_parse_table_2238(t_small_parse_table_array *v)
{
	v->a[44760] = anon_sym_DOLLAR_LBRACK;
	v->a[44761] = anon_sym_DOLLAR;
	v->a[44762] = sym__special_character;
	v->a[44763] = anon_sym_DQUOTE;
	v->a[44764] = sym_raw_string;
	v->a[44765] = sym_ansi_c_string;
	v->a[44766] = aux_sym_number_token1;
	v->a[44767] = aux_sym_number_token2;
	v->a[44768] = anon_sym_DOLLAR_LBRACE;
	v->a[44769] = anon_sym_DOLLAR_LPAREN;
	v->a[44770] = anon_sym_BQUOTE;
	v->a[44771] = anon_sym_DOLLAR_BQUOTE;
	v->a[44772] = anon_sym_LT_LPAREN;
	v->a[44773] = anon_sym_GT_LPAREN;
	v->a[44774] = sym_word;
	v->a[44775] = 3;
	v->a[44776] = actions(3);
	v->a[44777] = 1;
	v->a[44778] = sym_comment;
	v->a[44779] = actions(1281);
	small_parse_table_2239(v);
}

void	small_parse_table_2239(t_small_parse_table_array *v)
{
	v->a[44780] = 5;
	v->a[44781] = sym_file_descriptor;
	v->a[44782] = sym_test_operator;
	v->a[44783] = sym__bare_dollar;
	v->a[44784] = sym__brace_start;
	v->a[44785] = aux_sym_heredoc_redirect_token1;
	v->a[44786] = actions(1271);
	v->a[44787] = 43;
	v->a[44788] = anon_sym_LPAREN_LPAREN;
	v->a[44789] = anon_sym_SEMI;
	v->a[44790] = anon_sym_PIPE_PIPE;
	v->a[44791] = anon_sym_AMP_AMP;
	v->a[44792] = anon_sym_PIPE;
	v->a[44793] = anon_sym_AMP;
	v->a[44794] = anon_sym_EQ_EQ;
	v->a[44795] = anon_sym_LT;
	v->a[44796] = anon_sym_GT;
	v->a[44797] = anon_sym_LT_LT;
	v->a[44798] = anon_sym_GT_GT;
	v->a[44799] = anon_sym_LPAREN;
	small_parse_table_2240(v);
}

/* EOF small_parse_table_447.c */
