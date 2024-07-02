/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_583.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2915(t_small_parse_table_array *v)
{
	v->a[58300] = state(1412);
	v->a[58301] = 5;
	v->a[58302] = sym_arithmetic_expansion;
	v->a[58303] = sym_string;
	v->a[58304] = sym_simple_expansion;
	v->a[58305] = sym_expansion;
	v->a[58306] = sym_command_substitution;
	v->a[58307] = 5;
	v->a[58308] = actions(3);
	v->a[58309] = 1;
	v->a[58310] = sym_comment;
	v->a[58311] = actions(1984);
	v->a[58312] = 1;
	v->a[58313] = sym_variable_name;
	v->a[58314] = actions(1982);
	v->a[58315] = 2;
	v->a[58316] = sym_file_descriptor;
	v->a[58317] = aux_sym_heredoc_redirect_token1;
	v->a[58318] = state(1039);
	v->a[58319] = 2;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = sym_variable_assignment;
	v->a[58321] = aux_sym__variable_assignments_repeat1;
	v->a[58322] = actions(1980);
	v->a[58323] = 16;
	v->a[58324] = anon_sym_PIPE;
	v->a[58325] = anon_sym_SEMI_SEMI;
	v->a[58326] = anon_sym_AMP_AMP;
	v->a[58327] = anon_sym_PIPE_PIPE;
	v->a[58328] = anon_sym_LT;
	v->a[58329] = anon_sym_GT;
	v->a[58330] = anon_sym_GT_GT;
	v->a[58331] = anon_sym_LT_AMP;
	v->a[58332] = anon_sym_GT_AMP;
	v->a[58333] = anon_sym_GT_PIPE;
	v->a[58334] = anon_sym_LT_GT;
	v->a[58335] = anon_sym_LT_LT;
	v->a[58336] = anon_sym_LT_LT_DASH;
	v->a[58337] = anon_sym_AMP;
	v->a[58338] = anon_sym_BQUOTE;
	v->a[58339] = anon_sym_SEMI;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = 5;
	v->a[58341] = actions(3);
	v->a[58342] = 1;
	v->a[58343] = sym_comment;
	v->a[58344] = actions(1986);
	v->a[58345] = 1;
	v->a[58346] = sym_variable_name;
	v->a[58347] = actions(1959);
	v->a[58348] = 2;
	v->a[58349] = sym_file_descriptor;
	v->a[58350] = aux_sym_heredoc_redirect_token1;
	v->a[58351] = state(1039);
	v->a[58352] = 2;
	v->a[58353] = sym_variable_assignment;
	v->a[58354] = aux_sym__variable_assignments_repeat1;
	v->a[58355] = actions(1957);
	v->a[58356] = 16;
	v->a[58357] = anon_sym_PIPE;
	v->a[58358] = anon_sym_SEMI_SEMI;
	v->a[58359] = anon_sym_AMP_AMP;
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = anon_sym_PIPE_PIPE;
	v->a[58361] = anon_sym_LT;
	v->a[58362] = anon_sym_GT;
	v->a[58363] = anon_sym_GT_GT;
	v->a[58364] = anon_sym_LT_AMP;
	v->a[58365] = anon_sym_GT_AMP;
	v->a[58366] = anon_sym_GT_PIPE;
	v->a[58367] = anon_sym_LT_GT;
	v->a[58368] = anon_sym_LT_LT;
	v->a[58369] = anon_sym_LT_LT_DASH;
	v->a[58370] = anon_sym_AMP;
	v->a[58371] = anon_sym_BQUOTE;
	v->a[58372] = anon_sym_SEMI;
	v->a[58373] = 3;
	v->a[58374] = actions(3);
	v->a[58375] = 1;
	v->a[58376] = sym_comment;
	v->a[58377] = actions(1200);
	v->a[58378] = 4;
	v->a[58379] = sym_file_descriptor;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = sym__concat;
	v->a[58381] = sym_variable_name;
	v->a[58382] = aux_sym_heredoc_redirect_token1;
	v->a[58383] = actions(1198);
	v->a[58384] = 17;
	v->a[58385] = anon_sym_esac;
	v->a[58386] = anon_sym_PIPE;
	v->a[58387] = anon_sym_SEMI_SEMI;
	v->a[58388] = anon_sym_AMP_AMP;
	v->a[58389] = anon_sym_PIPE_PIPE;
	v->a[58390] = anon_sym_LT;
	v->a[58391] = anon_sym_GT;
	v->a[58392] = anon_sym_GT_GT;
	v->a[58393] = anon_sym_LT_AMP;
	v->a[58394] = anon_sym_GT_AMP;
	v->a[58395] = anon_sym_GT_PIPE;
	v->a[58396] = anon_sym_LT_GT;
	v->a[58397] = anon_sym_LT_LT;
	v->a[58398] = anon_sym_LT_LT_DASH;
	v->a[58399] = anon_sym_AMP;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
