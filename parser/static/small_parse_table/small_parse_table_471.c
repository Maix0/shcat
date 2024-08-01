/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_471.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2355(t_small_parse_table_array *v)
{
	v->a[47100] = actions(2157);
	v->a[47101] = 1;
	v->a[47102] = anon_sym_DQUOTE;
	v->a[47103] = actions(2015);
	v->a[47104] = 2;
	v->a[47105] = aux_sym__simple_variable_name_token1;
	v->a[47106] = aux_sym__multiline_variable_name_token1;
	v->a[47107] = actions(2009);
	v->a[47108] = 8;
	v->a[47109] = anon_sym_BANG;
	v->a[47110] = anon_sym_DASH;
	v->a[47111] = anon_sym_STAR;
	v->a[47112] = anon_sym_QMARK;
	v->a[47113] = anon_sym_DOLLAR;
	v->a[47114] = anon_sym_POUND;
	v->a[47115] = anon_sym_AT;
	v->a[47116] = anon_sym_0;
	v->a[47117] = 6;
	v->a[47118] = actions(3);
	v->a[47119] = 1;
	small_parse_table_2356(v);
}

void	small_parse_table_2356(t_small_parse_table_array *v)
{
	v->a[47120] = sym_comment;
	v->a[47121] = actions(2013);
	v->a[47122] = 1;
	v->a[47123] = sym_string_content;
	v->a[47124] = actions(2017);
	v->a[47125] = 1;
	v->a[47126] = sym_variable_name;
	v->a[47127] = actions(2159);
	v->a[47128] = 1;
	v->a[47129] = anon_sym_DQUOTE;
	v->a[47130] = actions(2015);
	v->a[47131] = 2;
	v->a[47132] = aux_sym__simple_variable_name_token1;
	v->a[47133] = aux_sym__multiline_variable_name_token1;
	v->a[47134] = actions(2009);
	v->a[47135] = 8;
	v->a[47136] = anon_sym_BANG;
	v->a[47137] = anon_sym_DASH;
	v->a[47138] = anon_sym_STAR;
	v->a[47139] = anon_sym_QMARK;
	small_parse_table_2357(v);
}

void	small_parse_table_2357(t_small_parse_table_array *v)
{
	v->a[47140] = anon_sym_DOLLAR;
	v->a[47141] = anon_sym_POUND;
	v->a[47142] = anon_sym_AT;
	v->a[47143] = anon_sym_0;
	v->a[47144] = 3;
	v->a[47145] = actions(3);
	v->a[47146] = 1;
	v->a[47147] = sym_comment;
	v->a[47148] = actions(2141);
	v->a[47149] = 2;
	v->a[47150] = ts_builtin_sym_end;
	v->a[47151] = aux_sym_heredoc_redirect_token1;
	v->a[47152] = actions(2143);
	v->a[47153] = 11;
	v->a[47154] = anon_sym_PIPE;
	v->a[47155] = anon_sym_RPAREN;
	v->a[47156] = anon_sym_SEMI_SEMI;
	v->a[47157] = anon_sym_AMP_AMP;
	v->a[47158] = anon_sym_PIPE_PIPE;
	v->a[47159] = anon_sym_LT;
	small_parse_table_2358(v);
}

void	small_parse_table_2358(t_small_parse_table_array *v)
{
	v->a[47160] = anon_sym_GT;
	v->a[47161] = anon_sym_GT_GT;
	v->a[47162] = anon_sym_LT_LT;
	v->a[47163] = anon_sym_BQUOTE;
	v->a[47164] = anon_sym_SEMI;
	v->a[47165] = 6;
	v->a[47166] = actions(3);
	v->a[47167] = 1;
	v->a[47168] = sym_comment;
	v->a[47169] = actions(1945);
	v->a[47170] = 1;
	v->a[47171] = anon_sym_LT_LT;
	v->a[47172] = actions(1948);
	v->a[47173] = 1;
	v->a[47174] = aux_sym_heredoc_redirect_token1;
	v->a[47175] = actions(2161);
	v->a[47176] = 3;
	v->a[47177] = anon_sym_LT;
	v->a[47178] = anon_sym_GT;
	v->a[47179] = anon_sym_GT_GT;
	small_parse_table_2359(v);
}

void	small_parse_table_2359(t_small_parse_table_array *v)
{
	v->a[47180] = state(1033);
	v->a[47181] = 3;
	v->a[47182] = sym_file_redirect;
	v->a[47183] = sym_heredoc_redirect;
	v->a[47184] = aux_sym_redirected_statement_repeat1;
	v->a[47185] = actions(1940);
	v->a[47186] = 5;
	v->a[47187] = anon_sym_PIPE;
	v->a[47188] = anon_sym_SEMI_SEMI;
	v->a[47189] = anon_sym_AMP_AMP;
	v->a[47190] = anon_sym_PIPE_PIPE;
	v->a[47191] = anon_sym_SEMI;
	v->a[47192] = 6;
	v->a[47193] = actions(3);
	v->a[47194] = 1;
	v->a[47195] = sym_comment;
	v->a[47196] = actions(2013);
	v->a[47197] = 1;
	v->a[47198] = sym_string_content;
	v->a[47199] = actions(2017);
	small_parse_table_2360(v);
}

/* EOF small_parse_table_471.c */
