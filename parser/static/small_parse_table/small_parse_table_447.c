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
	v->a[44700] = actions(1457);
	v->a[44701] = 1;
	v->a[44702] = sym_file_descriptor;
	v->a[44703] = actions(1460);
	v->a[44704] = 1;
	v->a[44705] = sym_variable_name;
	v->a[44706] = actions(1616);
	v->a[44707] = 1;
	v->a[44708] = anon_sym_RPAREN;
	v->a[44709] = actions(1454);
	v->a[44710] = 7;
	v->a[44711] = anon_sym_LT;
	v->a[44712] = anon_sym_GT;
	v->a[44713] = anon_sym_GT_GT;
	v->a[44714] = anon_sym_LT_AMP;
	v->a[44715] = anon_sym_GT_AMP;
	v->a[44716] = anon_sym_GT_PIPE;
	v->a[44717] = anon_sym_LT_GT;
	v->a[44718] = actions(1449);
	v->a[44719] = 8;
	small_parse_table_2236(v);
}

void	small_parse_table_2236(t_small_parse_table_array *v)
{
	v->a[44720] = anon_sym_PIPE;
	v->a[44721] = anon_sym_SEMI_SEMI;
	v->a[44722] = anon_sym_AMP_AMP;
	v->a[44723] = anon_sym_PIPE_PIPE;
	v->a[44724] = anon_sym_LT_LT;
	v->a[44725] = anon_sym_LT_LT_DASH;
	v->a[44726] = aux_sym_heredoc_redirect_token1;
	v->a[44727] = anon_sym_SEMI;
	v->a[44728] = actions(1447);
	v->a[44729] = 9;
	v->a[44730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44731] = anon_sym_DOLLAR;
	v->a[44732] = anon_sym_DQUOTE;
	v->a[44733] = sym_raw_string;
	v->a[44734] = sym_number;
	v->a[44735] = anon_sym_DOLLAR_LBRACE;
	v->a[44736] = anon_sym_DOLLAR_LPAREN;
	v->a[44737] = anon_sym_BQUOTE;
	v->a[44738] = sym_word;
	v->a[44739] = 6;
	small_parse_table_2237(v);
}

void	small_parse_table_2237(t_small_parse_table_array *v)
{
	v->a[44740] = actions(3);
	v->a[44741] = 1;
	v->a[44742] = sym_comment;
	v->a[44743] = actions(1465);
	v->a[44744] = 1;
	v->a[44745] = aux_sym_concatenation_token1;
	v->a[44746] = actions(1467);
	v->a[44747] = 1;
	v->a[44748] = sym__concat;
	v->a[44749] = state(695);
	v->a[44750] = 1;
	v->a[44751] = aux_sym_concatenation_repeat1;
	v->a[44752] = actions(1132);
	v->a[44753] = 2;
	v->a[44754] = sym_file_descriptor;
	v->a[44755] = sym__bare_dollar;
	v->a[44756] = actions(1134);
	v->a[44757] = 22;
	v->a[44758] = anon_sym_LPAREN;
	v->a[44759] = anon_sym_PIPE;
	small_parse_table_2238(v);
}

void	small_parse_table_2238(t_small_parse_table_array *v)
{
	v->a[44760] = anon_sym_AMP_AMP;
	v->a[44761] = anon_sym_PIPE_PIPE;
	v->a[44762] = anon_sym_LT;
	v->a[44763] = anon_sym_GT;
	v->a[44764] = anon_sym_GT_GT;
	v->a[44765] = anon_sym_LT_AMP;
	v->a[44766] = anon_sym_GT_AMP;
	v->a[44767] = anon_sym_GT_PIPE;
	v->a[44768] = anon_sym_LT_GT;
	v->a[44769] = anon_sym_LT_LT;
	v->a[44770] = anon_sym_LT_LT_DASH;
	v->a[44771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44772] = anon_sym_DOLLAR;
	v->a[44773] = anon_sym_DQUOTE;
	v->a[44774] = sym_raw_string;
	v->a[44775] = sym_number;
	v->a[44776] = anon_sym_DOLLAR_LBRACE;
	v->a[44777] = anon_sym_DOLLAR_LPAREN;
	v->a[44778] = anon_sym_BQUOTE;
	v->a[44779] = sym_word;
	small_parse_table_2239(v);
}

void	small_parse_table_2239(t_small_parse_table_array *v)
{
	v->a[44780] = 4;
	v->a[44781] = actions(3);
	v->a[44782] = 1;
	v->a[44783] = sym_comment;
	v->a[44784] = actions(1445);
	v->a[44785] = 1;
	v->a[44786] = ts_builtin_sym_end;
	v->a[44787] = actions(1412);
	v->a[44788] = 2;
	v->a[44789] = sym_file_descriptor;
	v->a[44790] = sym_variable_name;
	v->a[44791] = actions(1408);
	v->a[44792] = 24;
	v->a[44793] = anon_sym_for;
	v->a[44794] = anon_sym_while;
	v->a[44795] = anon_sym_until;
	v->a[44796] = anon_sym_if;
	v->a[44797] = anon_sym_case;
	v->a[44798] = anon_sym_LPAREN;
	v->a[44799] = anon_sym_LBRACE;
	small_parse_table_2240(v);
}

/* EOF small_parse_table_447.c */
