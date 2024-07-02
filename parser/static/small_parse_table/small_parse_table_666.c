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
	v->a[66600] = sym_command_substitution;
	v->a[66601] = 10;
	v->a[66602] = actions(3);
	v->a[66603] = 1;
	v->a[66604] = sym_comment;
	v->a[66605] = actions(2336);
	v->a[66606] = 1;
	v->a[66607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66608] = actions(2340);
	v->a[66609] = 1;
	v->a[66610] = anon_sym_DQUOTE;
	v->a[66611] = actions(2342);
	v->a[66612] = 1;
	v->a[66613] = anon_sym_DOLLAR_LBRACE;
	v->a[66614] = actions(2344);
	v->a[66615] = 1;
	v->a[66616] = anon_sym_DOLLAR_LPAREN;
	v->a[66617] = actions(2346);
	v->a[66618] = 1;
	v->a[66619] = anon_sym_BQUOTE;
	small_parse_table_3331(v);
}

void	small_parse_table_3331(t_small_parse_table_array *v)
{
	v->a[66620] = actions(2348);
	v->a[66621] = 1;
	v->a[66622] = sym__bare_dollar;
	v->a[66623] = actions(2527);
	v->a[66624] = 1;
	v->a[66625] = anon_sym_DOLLAR;
	v->a[66626] = actions(2334);
	v->a[66627] = 5;
	v->a[66628] = aux_sym_concatenation_token1;
	v->a[66629] = sym_raw_string;
	v->a[66630] = sym_number;
	v->a[66631] = sym__comment_word;
	v->a[66632] = sym_word;
	v->a[66633] = state(922);
	v->a[66634] = 5;
	v->a[66635] = sym_arithmetic_expansion;
	v->a[66636] = sym_string;
	v->a[66637] = sym_simple_expansion;
	v->a[66638] = sym_expansion;
	v->a[66639] = sym_command_substitution;
	small_parse_table_3332(v);
}

void	small_parse_table_3332(t_small_parse_table_array *v)
{
	v->a[66640] = 10;
	v->a[66641] = actions(3);
	v->a[66642] = 1;
	v->a[66643] = sym_comment;
	v->a[66644] = actions(103);
	v->a[66645] = 1;
	v->a[66646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66647] = actions(107);
	v->a[66648] = 1;
	v->a[66649] = anon_sym_DQUOTE;
	v->a[66650] = actions(111);
	v->a[66651] = 1;
	v->a[66652] = anon_sym_DOLLAR_LBRACE;
	v->a[66653] = actions(113);
	v->a[66654] = 1;
	v->a[66655] = anon_sym_DOLLAR_LPAREN;
	v->a[66656] = actions(115);
	v->a[66657] = 1;
	v->a[66658] = anon_sym_BQUOTE;
	v->a[66659] = actions(2531);
	small_parse_table_3333(v);
}

void	small_parse_table_3333(t_small_parse_table_array *v)
{
	v->a[66660] = 1;
	v->a[66661] = anon_sym_DOLLAR;
	v->a[66662] = actions(2533);
	v->a[66663] = 1;
	v->a[66664] = sym__bare_dollar;
	v->a[66665] = actions(2529);
	v->a[66666] = 5;
	v->a[66667] = aux_sym_concatenation_token1;
	v->a[66668] = sym_raw_string;
	v->a[66669] = sym_number;
	v->a[66670] = sym__comment_word;
	v->a[66671] = sym_word;
	v->a[66672] = state(407);
	v->a[66673] = 5;
	v->a[66674] = sym_arithmetic_expansion;
	v->a[66675] = sym_string;
	v->a[66676] = sym_simple_expansion;
	v->a[66677] = sym_expansion;
	v->a[66678] = sym_command_substitution;
	v->a[66679] = 10;
	small_parse_table_3334(v);
}

void	small_parse_table_3334(t_small_parse_table_array *v)
{
	v->a[66680] = actions(3);
	v->a[66681] = 1;
	v->a[66682] = sym_comment;
	v->a[66683] = actions(55);
	v->a[66684] = 1;
	v->a[66685] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66686] = actions(59);
	v->a[66687] = 1;
	v->a[66688] = anon_sym_DQUOTE;
	v->a[66689] = actions(63);
	v->a[66690] = 1;
	v->a[66691] = anon_sym_DOLLAR_LBRACE;
	v->a[66692] = actions(65);
	v->a[66693] = 1;
	v->a[66694] = anon_sym_DOLLAR_LPAREN;
	v->a[66695] = actions(67);
	v->a[66696] = 1;
	v->a[66697] = anon_sym_BQUOTE;
	v->a[66698] = actions(2462);
	v->a[66699] = 1;
	small_parse_table_3335(v);
}

/* EOF small_parse_table_666.c */
