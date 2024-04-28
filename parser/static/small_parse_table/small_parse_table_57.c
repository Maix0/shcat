/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_57.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_285(t_small_parse_table_array *v)
{
	v->a[5700] = aux_sym__literal_repeat1;
	v->a[5701] = state(1712);
	v->a[5702] = 1;
	v->a[5703] = sym_herestring_redirect;
	v->a[5704] = state(1716);
	v->a[5705] = 1;
	v->a[5706] = sym_concatenation;
	v->a[5707] = actions(1543);
	v->a[5708] = 2;
	v->a[5709] = anon_sym_LPAREN_LPAREN;
	v->a[5710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5711] = actions(1569);
	v->a[5712] = 2;
	v->a[5713] = anon_sym_LT_LPAREN;
	v->a[5714] = anon_sym_GT_LPAREN;
	v->a[5715] = actions(1627);
	v->a[5716] = 2;
	v->a[5717] = sym_file_descriptor;
	v->a[5718] = aux_sym_heredoc_redirect_token1;
	v->a[5719] = actions(1688);
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = 2;
	v->a[5721] = anon_sym_EQ_EQ;
	v->a[5722] = anon_sym_EQ_TILDE;
	v->a[5723] = actions(1686);
	v->a[5724] = 3;
	v->a[5725] = sym_raw_string;
	v->a[5726] = sym_ansi_c_string;
	v->a[5727] = sym_word;
	v->a[5728] = state(1219);
	v->a[5729] = 9;
	v->a[5730] = sym_arithmetic_expansion;
	v->a[5731] = sym_brace_expression;
	v->a[5732] = sym_string;
	v->a[5733] = sym_translated_string;
	v->a[5734] = sym_number;
	v->a[5735] = sym_simple_expansion;
	v->a[5736] = sym_expansion;
	v->a[5737] = sym_command_substitution;
	v->a[5738] = sym_process_substitution;
	v->a[5739] = actions(1625);
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = 20;
	v->a[5741] = anon_sym_SEMI;
	v->a[5742] = anon_sym_PIPE_PIPE;
	v->a[5743] = anon_sym_AMP_AMP;
	v->a[5744] = anon_sym_PIPE;
	v->a[5745] = anon_sym_AMP;
	v->a[5746] = anon_sym_LT;
	v->a[5747] = anon_sym_GT;
	v->a[5748] = anon_sym_LT_LT;
	v->a[5749] = anon_sym_GT_GT;
	v->a[5750] = anon_sym_SEMI_SEMI;
	v->a[5751] = anon_sym_PIPE_AMP;
	v->a[5752] = anon_sym_AMP_GT;
	v->a[5753] = anon_sym_AMP_GT_GT;
	v->a[5754] = anon_sym_LT_AMP;
	v->a[5755] = anon_sym_GT_AMP;
	v->a[5756] = anon_sym_GT_PIPE;
	v->a[5757] = anon_sym_LT_AMP_DASH;
	v->a[5758] = anon_sym_GT_AMP_DASH;
	v->a[5759] = anon_sym_LT_LT_DASH;
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = anon_sym_BQUOTE;
	v->a[5761] = 24;
	v->a[5762] = actions(3);
	v->a[5763] = 1;
	v->a[5764] = sym_comment;
	v->a[5765] = actions(2261);
	v->a[5766] = 1;
	v->a[5767] = anon_sym_DOLLAR_LBRACK;
	v->a[5768] = actions(2263);
	v->a[5769] = 1;
	v->a[5770] = anon_sym_DOLLAR;
	v->a[5771] = actions(2265);
	v->a[5772] = 1;
	v->a[5773] = sym__special_character;
	v->a[5774] = actions(2267);
	v->a[5775] = 1;
	v->a[5776] = anon_sym_DQUOTE;
	v->a[5777] = actions(2269);
	v->a[5778] = 1;
	v->a[5779] = aux_sym_number_token1;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = actions(2271);
	v->a[5781] = 1;
	v->a[5782] = aux_sym_number_token2;
	v->a[5783] = actions(2273);
	v->a[5784] = 1;
	v->a[5785] = anon_sym_DOLLAR_LBRACE;
	v->a[5786] = actions(2275);
	v->a[5787] = 1;
	v->a[5788] = anon_sym_DOLLAR_LPAREN;
	v->a[5789] = actions(2277);
	v->a[5790] = 1;
	v->a[5791] = anon_sym_BQUOTE;
	v->a[5792] = actions(2279);
	v->a[5793] = 1;
	v->a[5794] = anon_sym_DOLLAR_BQUOTE;
	v->a[5795] = actions(2283);
	v->a[5796] = 1;
	v->a[5797] = aux_sym__simple_variable_name_token1;
	v->a[5798] = actions(2285);
	v->a[5799] = 1;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
