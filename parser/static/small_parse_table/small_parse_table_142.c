/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_142.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_710(t_small_parse_table_array *v)
{
	v->a[14200] = 1;
	v->a[14201] = aux_sym_number_token2;
	v->a[14202] = actions(2366);
	v->a[14203] = 1;
	v->a[14204] = anon_sym_DOLLAR_LBRACE;
	v->a[14205] = actions(2368);
	v->a[14206] = 1;
	v->a[14207] = anon_sym_DOLLAR_LPAREN;
	v->a[14208] = actions(2370);
	v->a[14209] = 1;
	v->a[14210] = anon_sym_BQUOTE;
	v->a[14211] = actions(2372);
	v->a[14212] = 1;
	v->a[14213] = anon_sym_DOLLAR_BQUOTE;
	v->a[14214] = actions(2376);
	v->a[14215] = 1;
	v->a[14216] = sym__brace_start;
	v->a[14217] = actions(2442);
	v->a[14218] = 1;
	v->a[14219] = sym__special_character;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = actions(2444);
	v->a[14221] = 1;
	v->a[14222] = sym_test_operator;
	v->a[14223] = state(1981);
	v->a[14224] = 1;
	v->a[14225] = aux_sym__literal_repeat1;
	v->a[14226] = state(2315);
	v->a[14227] = 1;
	v->a[14228] = sym_concatenation;
	v->a[14229] = actions(1530);
	v->a[14230] = 2;
	v->a[14231] = sym_file_descriptor;
	v->a[14232] = aux_sym_heredoc_redirect_token1;
	v->a[14233] = actions(2440);
	v->a[14234] = 2;
	v->a[14235] = sym_raw_string;
	v->a[14236] = sym_word;
	v->a[14237] = state(2313);
	v->a[14238] = 7;
	v->a[14239] = sym_arithmetic_expansion;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = sym_brace_expression;
	v->a[14241] = sym_string;
	v->a[14242] = sym_number;
	v->a[14243] = sym_simple_expansion;
	v->a[14244] = sym_expansion;
	v->a[14245] = sym_command_substitution;
	v->a[14246] = actions(1528);
	v->a[14247] = 19;
	v->a[14248] = anon_sym_PIPE;
	v->a[14249] = anon_sym_SEMI_SEMI;
	v->a[14250] = anon_sym_PIPE_AMP;
	v->a[14251] = anon_sym_AMP_AMP;
	v->a[14252] = anon_sym_PIPE_PIPE;
	v->a[14253] = anon_sym_LT;
	v->a[14254] = anon_sym_GT;
	v->a[14255] = anon_sym_GT_GT;
	v->a[14256] = anon_sym_AMP_GT;
	v->a[14257] = anon_sym_AMP_GT_GT;
	v->a[14258] = anon_sym_LT_AMP;
	v->a[14259] = anon_sym_GT_AMP;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = anon_sym_GT_PIPE;
	v->a[14261] = anon_sym_LT_AMP_DASH;
	v->a[14262] = anon_sym_GT_AMP_DASH;
	v->a[14263] = anon_sym_LT_LT;
	v->a[14264] = anon_sym_LT_LT_DASH;
	v->a[14265] = anon_sym_AMP;
	v->a[14266] = anon_sym_SEMI;
	v->a[14267] = 27;
	v->a[14268] = actions(3);
	v->a[14269] = 1;
	v->a[14270] = sym_comment;
	v->a[14271] = actions(2456);
	v->a[14272] = 1;
	v->a[14273] = aux_sym_heredoc_redirect_token1;
	v->a[14274] = actions(2458);
	v->a[14275] = 1;
	v->a[14276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14277] = actions(2460);
	v->a[14278] = 1;
	v->a[14279] = anon_sym_DOLLAR;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = actions(2462);
	v->a[14281] = 1;
	v->a[14282] = sym__special_character;
	v->a[14283] = actions(2464);
	v->a[14284] = 1;
	v->a[14285] = anon_sym_DQUOTE;
	v->a[14286] = actions(2466);
	v->a[14287] = 1;
	v->a[14288] = aux_sym_number_token1;
	v->a[14289] = actions(2468);
	v->a[14290] = 1;
	v->a[14291] = aux_sym_number_token2;
	v->a[14292] = actions(2470);
	v->a[14293] = 1;
	v->a[14294] = anon_sym_DOLLAR_LBRACE;
	v->a[14295] = actions(2472);
	v->a[14296] = 1;
	v->a[14297] = anon_sym_DOLLAR_LPAREN;
	v->a[14298] = actions(2474);
	v->a[14299] = 1;
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
