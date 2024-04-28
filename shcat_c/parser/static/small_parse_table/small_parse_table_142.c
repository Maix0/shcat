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
	v->a[14200] = actions(3286);
	v->a[14201] = 1;
	v->a[14202] = sym_variable_name;
	v->a[14203] = state(1628);
	v->a[14204] = 1;
	v->a[14205] = sym_string;
	v->a[14206] = actions(3284);
	v->a[14207] = 2;
	v->a[14208] = aux_sym__simple_variable_name_token1;
	v->a[14209] = aux_sym__multiline_variable_name_token1;
	v->a[14210] = actions(1235);
	v->a[14211] = 3;
	v->a[14212] = sym_file_descriptor;
	v->a[14213] = sym_test_operator;
	v->a[14214] = sym__brace_start;
	v->a[14215] = actions(3280);
	v->a[14216] = 9;
	v->a[14217] = anon_sym_DASH;
	v->a[14218] = anon_sym_STAR;
	v->a[14219] = anon_sym_BANG;
	small_parse_table_711(v);
}

void	small_parse_table_711(t_small_parse_table_array *v)
{
	v->a[14220] = anon_sym_QMARK;
	v->a[14221] = anon_sym_DOLLAR;
	v->a[14222] = anon_sym_POUND;
	v->a[14223] = anon_sym_AT2;
	v->a[14224] = anon_sym_0;
	v->a[14225] = anon_sym__;
	v->a[14226] = actions(1227);
	v->a[14227] = 37;
	v->a[14228] = anon_sym_LPAREN_LPAREN;
	v->a[14229] = anon_sym_SEMI;
	v->a[14230] = anon_sym_PIPE_PIPE;
	v->a[14231] = anon_sym_AMP_AMP;
	v->a[14232] = anon_sym_PIPE;
	v->a[14233] = anon_sym_AMP;
	v->a[14234] = anon_sym_LT;
	v->a[14235] = anon_sym_GT;
	v->a[14236] = anon_sym_LT_LT;
	v->a[14237] = anon_sym_GT_GT;
	v->a[14238] = anon_sym_RPAREN;
	v->a[14239] = anon_sym_SEMI_SEMI;
	small_parse_table_712(v);
}

void	small_parse_table_712(t_small_parse_table_array *v)
{
	v->a[14240] = anon_sym_PIPE_AMP;
	v->a[14241] = anon_sym_AMP_GT;
	v->a[14242] = anon_sym_AMP_GT_GT;
	v->a[14243] = anon_sym_LT_AMP;
	v->a[14244] = anon_sym_GT_AMP;
	v->a[14245] = anon_sym_GT_PIPE;
	v->a[14246] = anon_sym_LT_AMP_DASH;
	v->a[14247] = anon_sym_GT_AMP_DASH;
	v->a[14248] = anon_sym_LT_LT_DASH;
	v->a[14249] = aux_sym_heredoc_redirect_token1;
	v->a[14250] = anon_sym_LT_LT_LT;
	v->a[14251] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14252] = anon_sym_DOLLAR_LBRACK;
	v->a[14253] = sym__special_character;
	v->a[14254] = sym_raw_string;
	v->a[14255] = sym_ansi_c_string;
	v->a[14256] = aux_sym_number_token1;
	v->a[14257] = aux_sym_number_token2;
	v->a[14258] = anon_sym_DOLLAR_LBRACE;
	v->a[14259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_713(v);
}

void	small_parse_table_713(t_small_parse_table_array *v)
{
	v->a[14260] = anon_sym_BQUOTE;
	v->a[14261] = anon_sym_DOLLAR_BQUOTE;
	v->a[14262] = anon_sym_LT_LPAREN;
	v->a[14263] = anon_sym_GT_LPAREN;
	v->a[14264] = sym_word;
	v->a[14265] = 21;
	v->a[14266] = actions(3);
	v->a[14267] = 1;
	v->a[14268] = sym_comment;
	v->a[14269] = actions(3294);
	v->a[14270] = 1;
	v->a[14271] = anon_sym_DOLLAR_LBRACK;
	v->a[14272] = actions(3297);
	v->a[14273] = 1;
	v->a[14274] = anon_sym_DOLLAR;
	v->a[14275] = actions(3300);
	v->a[14276] = 1;
	v->a[14277] = sym__special_character;
	v->a[14278] = actions(3303);
	v->a[14279] = 1;
	small_parse_table_714(v);
}

void	small_parse_table_714(t_small_parse_table_array *v)
{
	v->a[14280] = anon_sym_DQUOTE;
	v->a[14281] = actions(3306);
	v->a[14282] = 1;
	v->a[14283] = aux_sym_number_token1;
	v->a[14284] = actions(3309);
	v->a[14285] = 1;
	v->a[14286] = aux_sym_number_token2;
	v->a[14287] = actions(3312);
	v->a[14288] = 1;
	v->a[14289] = anon_sym_DOLLAR_LBRACE;
	v->a[14290] = actions(3315);
	v->a[14291] = 1;
	v->a[14292] = anon_sym_DOLLAR_LPAREN;
	v->a[14293] = actions(3318);
	v->a[14294] = 1;
	v->a[14295] = anon_sym_BQUOTE;
	v->a[14296] = actions(3321);
	v->a[14297] = 1;
	v->a[14298] = anon_sym_DOLLAR_BQUOTE;
	v->a[14299] = actions(3327);
	small_parse_table_715(v);
}

/* EOF small_parse_table_142.c */
