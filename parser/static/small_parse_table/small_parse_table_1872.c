/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1872.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9360(t_small_parse_table_array *v)
{
	v->a[187200] = state(6427);
	v->a[187201] = 5;
	v->a[187202] = sym_string;
	v->a[187203] = sym_array;
	v->a[187204] = sym_simple_expansion;
	v->a[187205] = sym_expansion;
	v->a[187206] = sym_process_substitution;
	v->a[187207] = state(6782);
	v->a[187208] = 5;
	v->a[187209] = sym_arithmetic_expansion;
	v->a[187210] = sym_brace_expression;
	v->a[187211] = sym_translated_string;
	v->a[187212] = sym_number;
	v->a[187213] = sym__concatenation_in_expansion;
	v->a[187214] = 8;
	v->a[187215] = actions(3);
	v->a[187216] = 1;
	v->a[187217] = sym_comment;
	v->a[187218] = actions(1241);
	v->a[187219] = 1;
	small_parse_table_9361(v);
}

void	small_parse_table_9361(t_small_parse_table_array *v)
{
	v->a[187220] = sym_file_descriptor;
	v->a[187221] = actions(7673);
	v->a[187222] = 1;
	v->a[187223] = anon_sym_DQUOTE;
	v->a[187224] = actions(7677);
	v->a[187225] = 1;
	v->a[187226] = sym_variable_name;
	v->a[187227] = state(4393);
	v->a[187228] = 1;
	v->a[187229] = sym_string;
	v->a[187230] = actions(7675);
	v->a[187231] = 2;
	v->a[187232] = aux_sym__simple_variable_name_token1;
	v->a[187233] = aux_sym__multiline_variable_name_token1;
	v->a[187234] = actions(7671);
	v->a[187235] = 9;
	v->a[187236] = anon_sym_DASH;
	v->a[187237] = anon_sym_STAR;
	v->a[187238] = anon_sym_BANG;
	v->a[187239] = anon_sym_QMARK;
	small_parse_table_9362(v);
}

void	small_parse_table_9362(t_small_parse_table_array *v)
{
	v->a[187240] = anon_sym_DOLLAR;
	v->a[187241] = anon_sym_POUND;
	v->a[187242] = anon_sym_AT2;
	v->a[187243] = anon_sym_0;
	v->a[187244] = anon_sym__;
	v->a[187245] = actions(1239);
	v->a[187246] = 20;
	v->a[187247] = anon_sym_SEMI;
	v->a[187248] = anon_sym_PIPE_PIPE;
	v->a[187249] = anon_sym_AMP_AMP;
	v->a[187250] = anon_sym_PIPE;
	v->a[187251] = anon_sym_AMP;
	v->a[187252] = anon_sym_LT;
	v->a[187253] = anon_sym_GT;
	v->a[187254] = anon_sym_LT_LT;
	v->a[187255] = anon_sym_GT_GT;
	v->a[187256] = anon_sym_SEMI_SEMI;
	v->a[187257] = anon_sym_PIPE_AMP;
	v->a[187258] = anon_sym_AMP_GT;
	v->a[187259] = anon_sym_AMP_GT_GT;
	small_parse_table_9363(v);
}

void	small_parse_table_9363(t_small_parse_table_array *v)
{
	v->a[187260] = anon_sym_LT_AMP;
	v->a[187261] = anon_sym_GT_AMP;
	v->a[187262] = anon_sym_GT_PIPE;
	v->a[187263] = anon_sym_LT_AMP_DASH;
	v->a[187264] = anon_sym_GT_AMP_DASH;
	v->a[187265] = anon_sym_LT_LT_DASH;
	v->a[187266] = aux_sym_heredoc_redirect_token1;
	v->a[187267] = 8;
	v->a[187268] = actions(3);
	v->a[187269] = 1;
	v->a[187270] = sym_comment;
	v->a[187271] = actions(1235);
	v->a[187272] = 1;
	v->a[187273] = sym_file_descriptor;
	v->a[187274] = actions(7673);
	v->a[187275] = 1;
	v->a[187276] = anon_sym_DQUOTE;
	v->a[187277] = actions(7677);
	v->a[187278] = 1;
	v->a[187279] = sym_variable_name;
	small_parse_table_9364(v);
}

void	small_parse_table_9364(t_small_parse_table_array *v)
{
	v->a[187280] = state(4393);
	v->a[187281] = 1;
	v->a[187282] = sym_string;
	v->a[187283] = actions(7675);
	v->a[187284] = 2;
	v->a[187285] = aux_sym__simple_variable_name_token1;
	v->a[187286] = aux_sym__multiline_variable_name_token1;
	v->a[187287] = actions(7671);
	v->a[187288] = 9;
	v->a[187289] = anon_sym_DASH;
	v->a[187290] = anon_sym_STAR;
	v->a[187291] = anon_sym_BANG;
	v->a[187292] = anon_sym_QMARK;
	v->a[187293] = anon_sym_DOLLAR;
	v->a[187294] = anon_sym_POUND;
	v->a[187295] = anon_sym_AT2;
	v->a[187296] = anon_sym_0;
	v->a[187297] = anon_sym__;
	v->a[187298] = actions(1227);
	v->a[187299] = 20;
	small_parse_table_9365(v);
}

/* EOF small_parse_table_1872.c */
