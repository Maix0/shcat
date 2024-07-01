/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_363.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1815(t_small_parse_table_array *v)
{
	v->a[36300] = sym_number;
	v->a[36301] = sym_word;
	v->a[36302] = state(772);
	v->a[36303] = 5;
	v->a[36304] = sym_arithmetic_expansion;
	v->a[36305] = sym_string;
	v->a[36306] = sym_simple_expansion;
	v->a[36307] = sym_expansion;
	v->a[36308] = sym_command_substitution;
	v->a[36309] = actions(541);
	v->a[36310] = 14;
	v->a[36311] = anon_sym_PIPE;
	v->a[36312] = anon_sym_AMP_AMP;
	v->a[36313] = anon_sym_PIPE_PIPE;
	v->a[36314] = anon_sym_LT;
	v->a[36315] = anon_sym_GT;
	v->a[36316] = anon_sym_GT_GT;
	v->a[36317] = anon_sym_LT_AMP;
	v->a[36318] = anon_sym_GT_AMP;
	v->a[36319] = anon_sym_GT_PIPE;
	small_parse_table_1816(v);
}

void	small_parse_table_1816(t_small_parse_table_array *v)
{
	v->a[36320] = anon_sym_LT_AMP_DASH;
	v->a[36321] = anon_sym_GT_AMP_DASH;
	v->a[36322] = anon_sym_LT_LT;
	v->a[36323] = anon_sym_LT_LT_DASH;
	v->a[36324] = aux_sym_heredoc_redirect_token1;
	v->a[36325] = 3;
	v->a[36326] = actions(3);
	v->a[36327] = 1;
	v->a[36328] = sym_comment;
	v->a[36329] = actions(1015);
	v->a[36330] = 3;
	v->a[36331] = sym_file_descriptor;
	v->a[36332] = sym__concat;
	v->a[36333] = sym__bare_dollar;
	v->a[36334] = actions(1013);
	v->a[36335] = 29;
	v->a[36336] = anon_sym_esac;
	v->a[36337] = anon_sym_LPAREN;
	v->a[36338] = anon_sym_PIPE;
	v->a[36339] = anon_sym_SEMI_SEMI;
	small_parse_table_1817(v);
}

void	small_parse_table_1817(t_small_parse_table_array *v)
{
	v->a[36340] = anon_sym_AMP_AMP;
	v->a[36341] = anon_sym_PIPE_PIPE;
	v->a[36342] = anon_sym_LT;
	v->a[36343] = anon_sym_GT;
	v->a[36344] = anon_sym_GT_GT;
	v->a[36345] = anon_sym_LT_AMP;
	v->a[36346] = anon_sym_GT_AMP;
	v->a[36347] = anon_sym_GT_PIPE;
	v->a[36348] = anon_sym_LT_AMP_DASH;
	v->a[36349] = anon_sym_GT_AMP_DASH;
	v->a[36350] = anon_sym_LT_LT;
	v->a[36351] = anon_sym_LT_LT_DASH;
	v->a[36352] = aux_sym_heredoc_redirect_token1;
	v->a[36353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36354] = anon_sym_AMP;
	v->a[36355] = aux_sym_concatenation_token1;
	v->a[36356] = anon_sym_DOLLAR;
	v->a[36357] = anon_sym_DQUOTE;
	v->a[36358] = sym_raw_string;
	v->a[36359] = sym_number;
	small_parse_table_1818(v);
}

void	small_parse_table_1818(t_small_parse_table_array *v)
{
	v->a[36360] = anon_sym_DOLLAR_LBRACE;
	v->a[36361] = anon_sym_DOLLAR_LPAREN;
	v->a[36362] = anon_sym_BQUOTE;
	v->a[36363] = sym_word;
	v->a[36364] = anon_sym_SEMI;
	v->a[36365] = 3;
	v->a[36366] = actions(3);
	v->a[36367] = 1;
	v->a[36368] = sym_comment;
	v->a[36369] = actions(970);
	v->a[36370] = 3;
	v->a[36371] = sym_file_descriptor;
	v->a[36372] = sym__concat;
	v->a[36373] = sym__bare_dollar;
	v->a[36374] = actions(968);
	v->a[36375] = 29;
	v->a[36376] = anon_sym_esac;
	v->a[36377] = anon_sym_LPAREN;
	v->a[36378] = anon_sym_PIPE;
	v->a[36379] = anon_sym_SEMI_SEMI;
	small_parse_table_1819(v);
}

void	small_parse_table_1819(t_small_parse_table_array *v)
{
	v->a[36380] = anon_sym_AMP_AMP;
	v->a[36381] = anon_sym_PIPE_PIPE;
	v->a[36382] = anon_sym_LT;
	v->a[36383] = anon_sym_GT;
	v->a[36384] = anon_sym_GT_GT;
	v->a[36385] = anon_sym_LT_AMP;
	v->a[36386] = anon_sym_GT_AMP;
	v->a[36387] = anon_sym_GT_PIPE;
	v->a[36388] = anon_sym_LT_AMP_DASH;
	v->a[36389] = anon_sym_GT_AMP_DASH;
	v->a[36390] = anon_sym_LT_LT;
	v->a[36391] = anon_sym_LT_LT_DASH;
	v->a[36392] = aux_sym_heredoc_redirect_token1;
	v->a[36393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36394] = anon_sym_AMP;
	v->a[36395] = aux_sym_concatenation_token1;
	v->a[36396] = anon_sym_DOLLAR;
	v->a[36397] = anon_sym_DQUOTE;
	v->a[36398] = sym_raw_string;
	v->a[36399] = sym_number;
	small_parse_table_1820(v);
}

/* EOF small_parse_table_363.c */
