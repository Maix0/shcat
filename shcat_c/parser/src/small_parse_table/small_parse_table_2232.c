/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2232.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11160(t_small_parse_table_array *v)
{
	v->a[223200] = sym_arithmetic_expansion;
	v->a[223201] = sym_brace_expression;
	v->a[223202] = sym_string;
	v->a[223203] = sym_translated_string;
	v->a[223204] = sym_number;
	v->a[223205] = sym_simple_expansion;
	v->a[223206] = sym_expansion;
	v->a[223207] = sym_command_substitution;
	v->a[223208] = sym_process_substitution;
	v->a[223209] = 18;
	v->a[223210] = actions(3);
	v->a[223211] = 1;
	v->a[223212] = sym_comment;
	v->a[223213] = actions(3737);
	v->a[223214] = 1;
	v->a[223215] = aux_sym_number_token1;
	v->a[223216] = actions(3739);
	v->a[223217] = 1;
	v->a[223218] = aux_sym_number_token2;
	v->a[223219] = actions(3743);
	small_parse_table_11161(v);
}

void	small_parse_table_11161(t_small_parse_table_array *v)
{
	v->a[223220] = 1;
	v->a[223221] = anon_sym_DOLLAR_LPAREN;
	v->a[223222] = actions(3755);
	v->a[223223] = 1;
	v->a[223224] = sym__brace_start;
	v->a[223225] = actions(8820);
	v->a[223226] = 1;
	v->a[223227] = anon_sym_DOLLAR_LBRACK;
	v->a[223228] = actions(8824);
	v->a[223229] = 1;
	v->a[223230] = anon_sym_DQUOTE;
	v->a[223231] = actions(8828);
	v->a[223232] = 1;
	v->a[223233] = anon_sym_DOLLAR_LBRACE;
	v->a[223234] = actions(8830);
	v->a[223235] = 1;
	v->a[223236] = anon_sym_BQUOTE;
	v->a[223237] = actions(8832);
	v->a[223238] = 1;
	v->a[223239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11162(v);
}

void	small_parse_table_11162(t_small_parse_table_array *v)
{
	v->a[223240] = actions(9412);
	v->a[223241] = 1;
	v->a[223242] = sym_word;
	v->a[223243] = actions(9420);
	v->a[223244] = 1;
	v->a[223245] = sym__comment_word;
	v->a[223246] = actions(10650);
	v->a[223247] = 1;
	v->a[223248] = anon_sym_DOLLAR;
	v->a[223249] = actions(8818);
	v->a[223250] = 2;
	v->a[223251] = anon_sym_LPAREN_LPAREN;
	v->a[223252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[223253] = actions(8834);
	v->a[223254] = 2;
	v->a[223255] = anon_sym_LT_LPAREN;
	v->a[223256] = anon_sym_GT_LPAREN;
	v->a[223257] = actions(9416);
	v->a[223258] = 2;
	v->a[223259] = sym_test_operator;
	small_parse_table_11163(v);
}

void	small_parse_table_11163(t_small_parse_table_array *v)
{
	v->a[223260] = sym__special_character;
	v->a[223261] = actions(9418);
	v->a[223262] = 3;
	v->a[223263] = sym__bare_dollar;
	v->a[223264] = sym_raw_string;
	v->a[223265] = sym_ansi_c_string;
	v->a[223266] = state(4810);
	v->a[223267] = 9;
	v->a[223268] = sym_arithmetic_expansion;
	v->a[223269] = sym_brace_expression;
	v->a[223270] = sym_string;
	v->a[223271] = sym_translated_string;
	v->a[223272] = sym_number;
	v->a[223273] = sym_simple_expansion;
	v->a[223274] = sym_expansion;
	v->a[223275] = sym_command_substitution;
	v->a[223276] = sym_process_substitution;
	v->a[223277] = 18;
	v->a[223278] = actions(3);
	v->a[223279] = 1;
	small_parse_table_11164(v);
}

void	small_parse_table_11164(t_small_parse_table_array *v)
{
	v->a[223280] = sym_comment;
	v->a[223281] = actions(1043);
	v->a[223282] = 1;
	v->a[223283] = anon_sym_DOLLAR_LBRACK;
	v->a[223284] = actions(1049);
	v->a[223285] = 1;
	v->a[223286] = anon_sym_DQUOTE;
	v->a[223287] = actions(1053);
	v->a[223288] = 1;
	v->a[223289] = aux_sym_number_token1;
	v->a[223290] = actions(1055);
	v->a[223291] = 1;
	v->a[223292] = aux_sym_number_token2;
	v->a[223293] = actions(1057);
	v->a[223294] = 1;
	v->a[223295] = anon_sym_DOLLAR_LBRACE;
	v->a[223296] = actions(1059);
	v->a[223297] = 1;
	v->a[223298] = anon_sym_DOLLAR_LPAREN;
	v->a[223299] = actions(1061);
	small_parse_table_11165(v);
}

/* EOF small_parse_table_2232.c */
