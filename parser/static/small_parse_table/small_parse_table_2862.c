/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2862.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14310(t_small_parse_table_array *v)
{
	v->a[286200] = sym_raw_string;
	v->a[286201] = sym_ansi_c_string;
	v->a[286202] = sym_word;
	v->a[286203] = state(6487);
	v->a[286204] = 6;
	v->a[286205] = sym_string;
	v->a[286206] = sym_array;
	v->a[286207] = sym_simple_expansion;
	v->a[286208] = sym_expansion;
	v->a[286209] = sym_command_substitution;
	v->a[286210] = sym_process_substitution;
	v->a[286211] = 5;
	v->a[286212] = actions(71);
	v->a[286213] = 1;
	v->a[286214] = sym_comment;
	v->a[286215] = actions(12851);
	v->a[286216] = 1;
	v->a[286217] = sym__special_character;
	v->a[286218] = state(5426);
	v->a[286219] = 1;
	small_parse_table_14311(v);
}

void	small_parse_table_14311(t_small_parse_table_array *v)
{
	v->a[286220] = aux_sym__literal_repeat1;
	v->a[286221] = actions(1362);
	v->a[286222] = 7;
	v->a[286223] = anon_sym_PIPE;
	v->a[286224] = anon_sym_LT;
	v->a[286225] = anon_sym_GT;
	v->a[286226] = anon_sym_LT_LT;
	v->a[286227] = anon_sym_AMP_GT;
	v->a[286228] = anon_sym_LT_AMP;
	v->a[286229] = anon_sym_GT_AMP;
	v->a[286230] = actions(1364);
	v->a[286231] = 11;
	v->a[286232] = sym_file_descriptor;
	v->a[286233] = anon_sym_PIPE_PIPE;
	v->a[286234] = anon_sym_AMP_AMP;
	v->a[286235] = anon_sym_GT_GT;
	v->a[286236] = anon_sym_PIPE_AMP;
	v->a[286237] = anon_sym_RBRACK;
	v->a[286238] = anon_sym_AMP_GT_GT;
	v->a[286239] = anon_sym_GT_PIPE;
	small_parse_table_14312(v);
}

void	small_parse_table_14312(t_small_parse_table_array *v)
{
	v->a[286240] = anon_sym_LT_AMP_DASH;
	v->a[286241] = anon_sym_GT_AMP_DASH;
	v->a[286242] = anon_sym_LT_LT_DASH;
	v->a[286243] = 5;
	v->a[286244] = actions(71);
	v->a[286245] = 1;
	v->a[286246] = sym_comment;
	v->a[286247] = state(5407);
	v->a[286248] = 1;
	v->a[286249] = aux_sym_concatenation_repeat1;
	v->a[286250] = actions(12688);
	v->a[286251] = 2;
	v->a[286252] = sym__concat;
	v->a[286253] = aux_sym_concatenation_token1;
	v->a[286254] = actions(2094);
	v->a[286255] = 7;
	v->a[286256] = anon_sym_PIPE;
	v->a[286257] = anon_sym_LT;
	v->a[286258] = anon_sym_GT;
	v->a[286259] = anon_sym_LT_LT;
	small_parse_table_14313(v);
}

void	small_parse_table_14313(t_small_parse_table_array *v)
{
	v->a[286260] = anon_sym_AMP_GT;
	v->a[286261] = anon_sym_LT_AMP;
	v->a[286262] = anon_sym_GT_AMP;
	v->a[286263] = actions(2096);
	v->a[286264] = 10;
	v->a[286265] = sym_file_descriptor;
	v->a[286266] = anon_sym_PIPE_PIPE;
	v->a[286267] = anon_sym_AMP_AMP;
	v->a[286268] = anon_sym_GT_GT;
	v->a[286269] = anon_sym_PIPE_AMP;
	v->a[286270] = anon_sym_AMP_GT_GT;
	v->a[286271] = anon_sym_GT_PIPE;
	v->a[286272] = anon_sym_LT_AMP_DASH;
	v->a[286273] = anon_sym_GT_AMP_DASH;
	v->a[286274] = anon_sym_LT_LT_DASH;
	v->a[286275] = 3;
	v->a[286276] = actions(71);
	v->a[286277] = 1;
	v->a[286278] = sym_comment;
	v->a[286279] = actions(1251);
	small_parse_table_14314(v);
}

void	small_parse_table_14314(t_small_parse_table_array *v)
{
	v->a[286280] = 7;
	v->a[286281] = anon_sym_PIPE;
	v->a[286282] = anon_sym_LT;
	v->a[286283] = anon_sym_GT;
	v->a[286284] = anon_sym_LT_LT;
	v->a[286285] = anon_sym_AMP_GT;
	v->a[286286] = anon_sym_LT_AMP;
	v->a[286287] = anon_sym_GT_AMP;
	v->a[286288] = actions(1253);
	v->a[286289] = 13;
	v->a[286290] = sym_file_descriptor;
	v->a[286291] = sym__concat;
	v->a[286292] = sym_variable_name;
	v->a[286293] = anon_sym_PIPE_PIPE;
	v->a[286294] = anon_sym_AMP_AMP;
	v->a[286295] = anon_sym_GT_GT;
	v->a[286296] = anon_sym_PIPE_AMP;
	v->a[286297] = anon_sym_AMP_GT_GT;
	v->a[286298] = anon_sym_GT_PIPE;
	v->a[286299] = anon_sym_LT_AMP_DASH;
	small_parse_table_14315(v);
}

/* EOF small_parse_table_2862.c */
