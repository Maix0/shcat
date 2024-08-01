/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_223.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1115(t_small_parse_table_array *v)
{
	v->a[22300] = anon_sym_SEMI;
	v->a[22301] = 3;
	v->a[22302] = actions(3);
	v->a[22303] = 1;
	v->a[22304] = sym_comment;
	v->a[22305] = actions(1003);
	v->a[22306] = 1;
	v->a[22307] = sym_variable_name;
	v->a[22308] = actions(1001);
	v->a[22309] = 23;
	v->a[22310] = anon_sym_for;
	v->a[22311] = anon_sym_while;
	v->a[22312] = anon_sym_until;
	v->a[22313] = anon_sym_if;
	v->a[22314] = anon_sym_fi;
	v->a[22315] = anon_sym_elif;
	v->a[22316] = anon_sym_else;
	v->a[22317] = anon_sym_case;
	v->a[22318] = anon_sym_LPAREN;
	v->a[22319] = anon_sym_LBRACE;
	small_parse_table_1116(v);
}

void	small_parse_table_1116(t_small_parse_table_array *v)
{
	v->a[22320] = anon_sym_BANG;
	v->a[22321] = anon_sym_LT;
	v->a[22322] = anon_sym_GT;
	v->a[22323] = anon_sym_GT_GT;
	v->a[22324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22325] = anon_sym_DOLLAR;
	v->a[22326] = anon_sym_DQUOTE;
	v->a[22327] = sym_raw_string;
	v->a[22328] = sym_number;
	v->a[22329] = anon_sym_DOLLAR_LBRACE;
	v->a[22330] = anon_sym_DOLLAR_LPAREN;
	v->a[22331] = anon_sym_BQUOTE;
	v->a[22332] = sym_word;
	v->a[22333] = 6;
	v->a[22334] = actions(3);
	v->a[22335] = 1;
	v->a[22336] = sym_comment;
	v->a[22337] = actions(878);
	v->a[22338] = 1;
	v->a[22339] = sym_variable_name;
	small_parse_table_1117(v);
}

void	small_parse_table_1117(t_small_parse_table_array *v)
{
	v->a[22340] = actions(991);
	v->a[22341] = 1;
	v->a[22342] = aux_sym_concatenation_token1;
	v->a[22343] = actions(993);
	v->a[22344] = 1;
	v->a[22345] = sym__concat;
	v->a[22346] = state(288);
	v->a[22347] = 1;
	v->a[22348] = aux_sym_concatenation_repeat1;
	v->a[22349] = actions(880);
	v->a[22350] = 20;
	v->a[22351] = anon_sym_esac;
	v->a[22352] = anon_sym_PIPE;
	v->a[22353] = anon_sym_SEMI_SEMI;
	v->a[22354] = anon_sym_AMP_AMP;
	v->a[22355] = anon_sym_PIPE_PIPE;
	v->a[22356] = anon_sym_LT;
	v->a[22357] = anon_sym_GT;
	v->a[22358] = anon_sym_GT_GT;
	v->a[22359] = anon_sym_LT_LT;
	small_parse_table_1118(v);
}

void	small_parse_table_1118(t_small_parse_table_array *v)
{
	v->a[22360] = aux_sym_heredoc_redirect_token1;
	v->a[22361] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22362] = anon_sym_DOLLAR;
	v->a[22363] = anon_sym_DQUOTE;
	v->a[22364] = sym_raw_string;
	v->a[22365] = sym_number;
	v->a[22366] = anon_sym_DOLLAR_LBRACE;
	v->a[22367] = anon_sym_DOLLAR_LPAREN;
	v->a[22368] = anon_sym_BQUOTE;
	v->a[22369] = sym_word;
	v->a[22370] = anon_sym_SEMI;
	v->a[22371] = 6;
	v->a[22372] = actions(3);
	v->a[22373] = 1;
	v->a[22374] = sym_comment;
	v->a[22375] = actions(857);
	v->a[22376] = 1;
	v->a[22377] = aux_sym_concatenation_token1;
	v->a[22378] = actions(921);
	v->a[22379] = 1;
	small_parse_table_1119(v);
}

void	small_parse_table_1119(t_small_parse_table_array *v)
{
	v->a[22380] = sym__bare_dollar;
	v->a[22381] = actions(1005);
	v->a[22382] = 1;
	v->a[22383] = sym__concat;
	v->a[22384] = state(270);
	v->a[22385] = 1;
	v->a[22386] = aux_sym_concatenation_repeat1;
	v->a[22387] = actions(923);
	v->a[22388] = 20;
	v->a[22389] = anon_sym_PIPE;
	v->a[22390] = anon_sym_RPAREN;
	v->a[22391] = anon_sym_SEMI_SEMI;
	v->a[22392] = anon_sym_AMP_AMP;
	v->a[22393] = anon_sym_PIPE_PIPE;
	v->a[22394] = anon_sym_LT;
	v->a[22395] = anon_sym_GT;
	v->a[22396] = anon_sym_GT_GT;
	v->a[22397] = anon_sym_LT_LT;
	v->a[22398] = aux_sym_heredoc_redirect_token1;
	v->a[22399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1120(v);
}

/* EOF small_parse_table_223.c */
