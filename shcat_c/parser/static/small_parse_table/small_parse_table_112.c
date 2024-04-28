/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_112.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_560(t_small_parse_table_array *v)
{
	v->a[11200] = anon_sym_GT_AMP_DASH;
	v->a[11201] = anon_sym_LT_LT_DASH;
	v->a[11202] = aux_sym_heredoc_redirect_token1;
	v->a[11203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11204] = anon_sym_DOLLAR_LBRACK;
	v->a[11205] = sym__special_character;
	v->a[11206] = sym_raw_string;
	v->a[11207] = sym_ansi_c_string;
	v->a[11208] = aux_sym_number_token1;
	v->a[11209] = aux_sym_number_token2;
	v->a[11210] = anon_sym_DOLLAR_LBRACE;
	v->a[11211] = anon_sym_DOLLAR_LPAREN;
	v->a[11212] = anon_sym_BQUOTE;
	v->a[11213] = anon_sym_DOLLAR_BQUOTE;
	v->a[11214] = anon_sym_LT_LPAREN;
	v->a[11215] = anon_sym_GT_LPAREN;
	v->a[11216] = sym_word;
	v->a[11217] = 37;
	v->a[11218] = actions(19);
	v->a[11219] = 1;
	small_parse_table_561(v);
}

void	small_parse_table_561(t_small_parse_table_array *v)
{
	v->a[11220] = anon_sym_LPAREN;
	v->a[11221] = actions(33);
	v->a[11222] = 1;
	v->a[11223] = anon_sym_LBRACK;
	v->a[11224] = actions(35);
	v->a[11225] = 1;
	v->a[11226] = anon_sym_LBRACK_LBRACK;
	v->a[11227] = actions(71);
	v->a[11228] = 1;
	v->a[11229] = sym_comment;
	v->a[11230] = actions(288);
	v->a[11231] = 1;
	v->a[11232] = anon_sym_LPAREN_LPAREN;
	v->a[11233] = actions(312);
	v->a[11234] = 1;
	v->a[11235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11236] = actions(314);
	v->a[11237] = 1;
	v->a[11238] = anon_sym_DOLLAR_LBRACK;
	v->a[11239] = actions(316);
	small_parse_table_562(v);
}

void	small_parse_table_562(t_small_parse_table_array *v)
{
	v->a[11240] = 1;
	v->a[11241] = anon_sym_DOLLAR;
	v->a[11242] = actions(320);
	v->a[11243] = 1;
	v->a[11244] = anon_sym_DQUOTE;
	v->a[11245] = actions(324);
	v->a[11246] = 1;
	v->a[11247] = aux_sym_number_token1;
	v->a[11248] = actions(326);
	v->a[11249] = 1;
	v->a[11250] = aux_sym_number_token2;
	v->a[11251] = actions(328);
	v->a[11252] = 1;
	v->a[11253] = anon_sym_DOLLAR_LBRACE;
	v->a[11254] = actions(330);
	v->a[11255] = 1;
	v->a[11256] = anon_sym_DOLLAR_LPAREN;
	v->a[11257] = actions(332);
	v->a[11258] = 1;
	v->a[11259] = anon_sym_BQUOTE;
	small_parse_table_563(v);
}

void	small_parse_table_563(t_small_parse_table_array *v)
{
	v->a[11260] = actions(334);
	v->a[11261] = 1;
	v->a[11262] = anon_sym_DOLLAR_BQUOTE;
	v->a[11263] = actions(344);
	v->a[11264] = 1;
	v->a[11265] = sym__brace_start;
	v->a[11266] = actions(1015);
	v->a[11267] = 1;
	v->a[11268] = sym__special_character;
	v->a[11269] = actions(1021);
	v->a[11270] = 1;
	v->a[11271] = sym_variable_name;
	v->a[11272] = actions(1023);
	v->a[11273] = 1;
	v->a[11274] = sym_test_operator;
	v->a[11275] = actions(1394);
	v->a[11276] = 1;
	v->a[11277] = anon_sym_LT_LT_LT;
	v->a[11278] = actions(1396);
	v->a[11279] = 1;
	small_parse_table_564(v);
}

void	small_parse_table_564(t_small_parse_table_array *v)
{
	v->a[11280] = sym_file_descriptor;
	v->a[11281] = actions(2961);
	v->a[11282] = 1;
	v->a[11283] = sym_word;
	v->a[11284] = state(596);
	v->a[11285] = 1;
	v->a[11286] = sym_command_name;
	v->a[11287] = state(933);
	v->a[11288] = 1;
	v->a[11289] = aux_sym_command_repeat1;
	v->a[11290] = state(1267);
	v->a[11291] = 1;
	v->a[11292] = aux_sym__literal_repeat1;
	v->a[11293] = state(1376);
	v->a[11294] = 1;
	v->a[11295] = sym_concatenation;
	v->a[11296] = state(1974);
	v->a[11297] = 1;
	v->a[11298] = sym_variable_assignment;
	v->a[11299] = state(5026);
	small_parse_table_565(v);
}

/* EOF small_parse_table_112.c */
