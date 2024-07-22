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
	v->a[68300] = actions(59);
	v->a[68301] = 1;
	v->a[68302] = anon_sym_DQUOTE;
	v->a[68303] = actions(63);
	v->a[68304] = 1;
	v->a[68305] = anon_sym_DOLLAR_LBRACE;
	v->a[68306] = actions(65);
	v->a[68307] = 1;
	v->a[68308] = anon_sym_DOLLAR_LPAREN;
	v->a[68309] = actions(67);
	v->a[68310] = 1;
	v->a[68311] = anon_sym_BQUOTE;
	v->a[68312] = actions(2496);
	v->a[68313] = 1;
	v->a[68314] = sym__bare_dollar;
	v->a[68315] = actions(2492);
	v->a[68316] = 5;
	v->a[68317] = aux_sym_concatenation_token1;
	v->a[68318] = sym_raw_string;
	v->a[68319] = sym_number;
	small_parse_table_3416(v);
}

void	small_parse_table_3416(t_small_parse_table_array *v)
{
	v->a[68320] = sym__comment_word;
	v->a[68321] = sym_word;
	v->a[68322] = state(419);
	v->a[68323] = 5;
	v->a[68324] = sym_arithmetic_expansion;
	v->a[68325] = sym_string;
	v->a[68326] = sym_simple_expansion;
	v->a[68327] = sym_expansion;
	v->a[68328] = sym_command_substitution;
	v->a[68329] = 7;
	v->a[68330] = actions(3);
	v->a[68331] = 1;
	v->a[68332] = sym_comment;
	v->a[68333] = actions(1951);
	v->a[68334] = 1;
	v->a[68335] = aux_sym_heredoc_redirect_token1;
	v->a[68336] = actions(2429);
	v->a[68337] = 1;
	v->a[68338] = sym_file_descriptor;
	v->a[68339] = actions(790);
	small_parse_table_3417(v);
}

void	small_parse_table_3417(t_small_parse_table_array *v)
{
	v->a[68340] = 2;
	v->a[68341] = anon_sym_LT_LT;
	v->a[68342] = anon_sym_LT_LT_DASH;
	v->a[68343] = actions(1949);
	v->a[68344] = 3;
	v->a[68345] = anon_sym_PIPE;
	v->a[68346] = anon_sym_AMP_AMP;
	v->a[68347] = anon_sym_PIPE_PIPE;
	v->a[68348] = state(1363);
	v->a[68349] = 3;
	v->a[68350] = sym_file_redirect;
	v->a[68351] = sym_heredoc_redirect;
	v->a[68352] = aux_sym_redirected_statement_repeat1;
	v->a[68353] = actions(2425);
	v->a[68354] = 7;
	v->a[68355] = anon_sym_LT;
	v->a[68356] = anon_sym_GT;
	v->a[68357] = anon_sym_GT_GT;
	v->a[68358] = anon_sym_LT_AMP;
	v->a[68359] = anon_sym_GT_AMP;
	small_parse_table_3418(v);
}

void	small_parse_table_3418(t_small_parse_table_array *v)
{
	v->a[68360] = anon_sym_GT_PIPE;
	v->a[68361] = anon_sym_LT_GT;
	v->a[68362] = 3;
	v->a[68363] = actions(3);
	v->a[68364] = 1;
	v->a[68365] = sym_comment;
	v->a[68366] = actions(2195);
	v->a[68367] = 2;
	v->a[68368] = sym_file_descriptor;
	v->a[68369] = aux_sym_heredoc_redirect_token1;
	v->a[68370] = actions(2197);
	v->a[68371] = 15;
	v->a[68372] = anon_sym_esac;
	v->a[68373] = anon_sym_PIPE;
	v->a[68374] = anon_sym_SEMI_SEMI;
	v->a[68375] = anon_sym_AMP_AMP;
	v->a[68376] = anon_sym_PIPE_PIPE;
	v->a[68377] = anon_sym_LT;
	v->a[68378] = anon_sym_GT;
	v->a[68379] = anon_sym_GT_GT;
	small_parse_table_3419(v);
}

void	small_parse_table_3419(t_small_parse_table_array *v)
{
	v->a[68380] = anon_sym_LT_AMP;
	v->a[68381] = anon_sym_GT_AMP;
	v->a[68382] = anon_sym_GT_PIPE;
	v->a[68383] = anon_sym_LT_GT;
	v->a[68384] = anon_sym_LT_LT;
	v->a[68385] = anon_sym_LT_LT_DASH;
	v->a[68386] = anon_sym_SEMI;
	v->a[68387] = 10;
	v->a[68388] = actions(3);
	v->a[68389] = 1;
	v->a[68390] = sym_comment;
	v->a[68391] = actions(107);
	v->a[68392] = 1;
	v->a[68393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68394] = actions(111);
	v->a[68395] = 1;
	v->a[68396] = anon_sym_DQUOTE;
	v->a[68397] = actions(115);
	v->a[68398] = 1;
	v->a[68399] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3420(v);
}

/* EOF small_parse_table_683.c */
