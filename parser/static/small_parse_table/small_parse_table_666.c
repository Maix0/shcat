/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_666.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3330(t_small_parse_table_array *v)
{
	v->a[66600] = 1;
	v->a[66601] = aux_sym_heredoc_redirect_token1;
	v->a[66602] = actions(2961);
	v->a[66603] = 1;
	v->a[66604] = anon_sym_in;
	v->a[66605] = state(1630);
	v->a[66606] = 1;
	v->a[66607] = sym_terminator;
	v->a[66608] = actions(1609);
	v->a[66609] = 2;
	v->a[66610] = anon_sym_SEMI_SEMI;
	v->a[66611] = anon_sym_SEMI;
	v->a[66612] = 4;
	v->a[66613] = actions(407);
	v->a[66614] = 1;
	v->a[66615] = sym_comment;
	v->a[66616] = actions(3029);
	v->a[66617] = 1;
	v->a[66618] = anon_sym_elif;
	v->a[66619] = actions(3027);
	small_parse_table_3331(v);
}

void	small_parse_table_3331(t_small_parse_table_array *v)
{
	v->a[66620] = 2;
	v->a[66621] = anon_sym_fi;
	v->a[66622] = anon_sym_else;
	v->a[66623] = state(1529);
	v->a[66624] = 2;
	v->a[66625] = sym_elif_clause;
	v->a[66626] = aux_sym_if_statement_repeat1;
	v->a[66627] = 6;
	v->a[66628] = actions(407);
	v->a[66629] = 1;
	v->a[66630] = sym_comment;
	v->a[66631] = actions(3023);
	v->a[66632] = 1;
	v->a[66633] = sym__heredoc_body_beginning;
	v->a[66634] = actions(3025);
	v->a[66635] = 1;
	v->a[66636] = sym_simple_heredoc_body;
	v->a[66637] = state(1389);
	v->a[66638] = 1;
	v->a[66639] = sym__simple_heredoc_body;
	small_parse_table_3332(v);
}

void	small_parse_table_3332(t_small_parse_table_array *v)
{
	v->a[66640] = state(1392);
	v->a[66641] = 1;
	v->a[66642] = sym__heredoc_body;
	v->a[66643] = state(1778);
	v->a[66644] = 1;
	v->a[66645] = sym_heredoc_body;
	v->a[66646] = 6;
	v->a[66647] = actions(407);
	v->a[66648] = 1;
	v->a[66649] = sym_comment;
	v->a[66650] = actions(3021);
	v->a[66651] = 1;
	v->a[66652] = sym_simple_heredoc_body;
	v->a[66653] = actions(3023);
	v->a[66654] = 1;
	v->a[66655] = sym__heredoc_body_beginning;
	v->a[66656] = state(1139);
	v->a[66657] = 1;
	v->a[66658] = sym__heredoc_body;
	v->a[66659] = state(1140);
	small_parse_table_3333(v);
}

void	small_parse_table_3333(t_small_parse_table_array *v)
{
	v->a[66660] = 1;
	v->a[66661] = sym__simple_heredoc_body;
	v->a[66662] = state(1734);
	v->a[66663] = 1;
	v->a[66664] = sym_heredoc_body;
	v->a[66665] = 5;
	v->a[66666] = actions(3);
	v->a[66667] = 1;
	v->a[66668] = sym_comment;
	v->a[66669] = actions(2938);
	v->a[66670] = 1;
	v->a[66671] = aux_sym_heredoc_redirect_token1;
	v->a[66672] = actions(3032);
	v->a[66673] = 1;
	v->a[66674] = anon_sym_in;
	v->a[66675] = state(1607);
	v->a[66676] = 1;
	v->a[66677] = sym_terminator;
	v->a[66678] = actions(1609);
	v->a[66679] = 2;
	small_parse_table_3334(v);
}

void	small_parse_table_3334(t_small_parse_table_array *v)
{
	v->a[66680] = anon_sym_SEMI_SEMI;
	v->a[66681] = anon_sym_SEMI;
	v->a[66682] = 5;
	v->a[66683] = actions(407);
	v->a[66684] = 1;
	v->a[66685] = sym_comment;
	v->a[66686] = actions(3021);
	v->a[66687] = 1;
	v->a[66688] = sym_simple_heredoc_body;
	v->a[66689] = actions(3023);
	v->a[66690] = 1;
	v->a[66691] = sym__heredoc_body_beginning;
	v->a[66692] = state(1734);
	v->a[66693] = 1;
	v->a[66694] = sym_heredoc_body;
	v->a[66695] = state(1141);
	v->a[66696] = 2;
	v->a[66697] = sym__heredoc_body;
	v->a[66698] = sym__simple_heredoc_body;
	v->a[66699] = 5;
	small_parse_table_3335(v);
}

/* EOF small_parse_table_666.c */
