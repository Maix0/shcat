/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_683.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3415(t_small_parse_table_array *v)
{
	v->a[68300] = state(2096);
	v->a[68301] = 2;
	v->a[68302] = sym_concatenation;
	v->a[68303] = sym__extglob_blob;
	v->a[68304] = actions(1770);
	v->a[68305] = 3;
	v->a[68306] = sym_raw_string;
	v->a[68307] = sym_number;
	v->a[68308] = sym_word;
	v->a[68309] = state(2001);
	v->a[68310] = 5;
	v->a[68311] = sym_arithmetic_expansion;
	v->a[68312] = sym_string;
	v->a[68313] = sym_simple_expansion;
	v->a[68314] = sym_expansion;
	v->a[68315] = sym_command_substitution;
	v->a[68316] = 15;
	v->a[68317] = actions(3);
	v->a[68318] = 1;
	v->a[68319] = sym_comment;
	small_parse_table_3416(v);
}

void	small_parse_table_3416(t_small_parse_table_array *v)
{
	v->a[68320] = actions(1774);
	v->a[68321] = 1;
	v->a[68322] = anon_sym_LPAREN;
	v->a[68323] = actions(1778);
	v->a[68324] = 1;
	v->a[68325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68326] = actions(1780);
	v->a[68327] = 1;
	v->a[68328] = anon_sym_DOLLAR;
	v->a[68329] = actions(1782);
	v->a[68330] = 1;
	v->a[68331] = anon_sym_DQUOTE;
	v->a[68332] = actions(1784);
	v->a[68333] = 1;
	v->a[68334] = anon_sym_DOLLAR_LBRACE;
	v->a[68335] = actions(1786);
	v->a[68336] = 1;
	v->a[68337] = anon_sym_DOLLAR_LPAREN;
	v->a[68338] = actions(1788);
	v->a[68339] = 1;
	small_parse_table_3417(v);
}

void	small_parse_table_3417(t_small_parse_table_array *v)
{
	v->a[68340] = anon_sym_BQUOTE;
	v->a[68341] = actions(1790);
	v->a[68342] = 1;
	v->a[68343] = sym_extglob_pattern;
	v->a[68344] = state(1329);
	v->a[68345] = 1;
	v->a[68346] = aux_sym_case_statement_repeat1;
	v->a[68347] = state(1920);
	v->a[68348] = 1;
	v->a[68349] = sym_case_item;
	v->a[68350] = state(2293);
	v->a[68351] = 1;
	v->a[68352] = sym__case_item_last;
	v->a[68353] = state(2096);
	v->a[68354] = 2;
	v->a[68355] = sym_concatenation;
	v->a[68356] = sym__extglob_blob;
	v->a[68357] = actions(1770);
	v->a[68358] = 3;
	v->a[68359] = sym_raw_string;
	small_parse_table_3418(v);
}

void	small_parse_table_3418(t_small_parse_table_array *v)
{
	v->a[68360] = sym_number;
	v->a[68361] = sym_word;
	v->a[68362] = state(2001);
	v->a[68363] = 5;
	v->a[68364] = sym_arithmetic_expansion;
	v->a[68365] = sym_string;
	v->a[68366] = sym_simple_expansion;
	v->a[68367] = sym_expansion;
	v->a[68368] = sym_command_substitution;
	v->a[68369] = 3;
	v->a[68370] = actions(3);
	v->a[68371] = 1;
	v->a[68372] = sym_comment;
	v->a[68373] = actions(2272);
	v->a[68374] = 3;
	v->a[68375] = sym_file_descriptor;
	v->a[68376] = ts_builtin_sym_end;
	v->a[68377] = aux_sym_heredoc_redirect_token1;
	v->a[68378] = actions(2274);
	v->a[68379] = 18;
	small_parse_table_3419(v);
}

void	small_parse_table_3419(t_small_parse_table_array *v)
{
	v->a[68380] = anon_sym_PIPE;
	v->a[68381] = anon_sym_RPAREN;
	v->a[68382] = anon_sym_SEMI_SEMI;
	v->a[68383] = anon_sym_AMP_AMP;
	v->a[68384] = anon_sym_PIPE_PIPE;
	v->a[68385] = anon_sym_LT;
	v->a[68386] = anon_sym_GT;
	v->a[68387] = anon_sym_GT_GT;
	v->a[68388] = anon_sym_LT_AMP;
	v->a[68389] = anon_sym_GT_AMP;
	v->a[68390] = anon_sym_GT_PIPE;
	v->a[68391] = anon_sym_LT_AMP_DASH;
	v->a[68392] = anon_sym_GT_AMP_DASH;
	v->a[68393] = anon_sym_LT_LT;
	v->a[68394] = anon_sym_LT_LT_DASH;
	v->a[68395] = anon_sym_AMP;
	v->a[68396] = anon_sym_BQUOTE;
	v->a[68397] = anon_sym_SEMI;
	v->a[68398] = 7;
	v->a[68399] = actions(3);
	small_parse_table_3420(v);
}

/* EOF small_parse_table_683.c */
