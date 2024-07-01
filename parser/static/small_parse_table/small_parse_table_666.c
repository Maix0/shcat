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
	v->a[66600] = actions(980);
	v->a[66601] = 18;
	v->a[66602] = anon_sym_LT;
	v->a[66603] = anon_sym_GT;
	v->a[66604] = anon_sym_GT_GT;
	v->a[66605] = anon_sym_LT_AMP;
	v->a[66606] = anon_sym_GT_AMP;
	v->a[66607] = anon_sym_GT_PIPE;
	v->a[66608] = anon_sym_LT_AMP_DASH;
	v->a[66609] = anon_sym_GT_AMP_DASH;
	v->a[66610] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66611] = aux_sym_concatenation_token1;
	v->a[66612] = anon_sym_DOLLAR;
	v->a[66613] = anon_sym_DQUOTE;
	v->a[66614] = sym_raw_string;
	v->a[66615] = sym_number;
	v->a[66616] = anon_sym_DOLLAR_LBRACE;
	v->a[66617] = anon_sym_DOLLAR_LPAREN;
	v->a[66618] = anon_sym_BQUOTE;
	v->a[66619] = sym_word;
	small_parse_table_3331(v);
}

void	small_parse_table_3331(t_small_parse_table_array *v)
{
	v->a[66620] = 15;
	v->a[66621] = actions(3);
	v->a[66622] = 1;
	v->a[66623] = sym_comment;
	v->a[66624] = actions(1774);
	v->a[66625] = 1;
	v->a[66626] = anon_sym_LPAREN;
	v->a[66627] = actions(1778);
	v->a[66628] = 1;
	v->a[66629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66630] = actions(1780);
	v->a[66631] = 1;
	v->a[66632] = anon_sym_DOLLAR;
	v->a[66633] = actions(1782);
	v->a[66634] = 1;
	v->a[66635] = anon_sym_DQUOTE;
	v->a[66636] = actions(1784);
	v->a[66637] = 1;
	v->a[66638] = anon_sym_DOLLAR_LBRACE;
	v->a[66639] = actions(1786);
	small_parse_table_3332(v);
}

void	small_parse_table_3332(t_small_parse_table_array *v)
{
	v->a[66640] = 1;
	v->a[66641] = anon_sym_DOLLAR_LPAREN;
	v->a[66642] = actions(1788);
	v->a[66643] = 1;
	v->a[66644] = anon_sym_BQUOTE;
	v->a[66645] = actions(1790);
	v->a[66646] = 1;
	v->a[66647] = sym_extglob_pattern;
	v->a[66648] = state(1329);
	v->a[66649] = 1;
	v->a[66650] = aux_sym_case_statement_repeat1;
	v->a[66651] = state(1920);
	v->a[66652] = 1;
	v->a[66653] = sym_case_item;
	v->a[66654] = state(2268);
	v->a[66655] = 1;
	v->a[66656] = sym__case_item_last;
	v->a[66657] = state(2096);
	v->a[66658] = 2;
	v->a[66659] = sym_concatenation;
	small_parse_table_3333(v);
}

void	small_parse_table_3333(t_small_parse_table_array *v)
{
	v->a[66660] = sym__extglob_blob;
	v->a[66661] = actions(1770);
	v->a[66662] = 3;
	v->a[66663] = sym_raw_string;
	v->a[66664] = sym_number;
	v->a[66665] = sym_word;
	v->a[66666] = state(2001);
	v->a[66667] = 5;
	v->a[66668] = sym_arithmetic_expansion;
	v->a[66669] = sym_string;
	v->a[66670] = sym_simple_expansion;
	v->a[66671] = sym_expansion;
	v->a[66672] = sym_command_substitution;
	v->a[66673] = 3;
	v->a[66674] = actions(3);
	v->a[66675] = 1;
	v->a[66676] = sym_comment;
	v->a[66677] = actions(2216);
	v->a[66678] = 3;
	v->a[66679] = sym_file_descriptor;
	small_parse_table_3334(v);
}

void	small_parse_table_3334(t_small_parse_table_array *v)
{
	v->a[66680] = ts_builtin_sym_end;
	v->a[66681] = aux_sym_heredoc_redirect_token1;
	v->a[66682] = actions(2218);
	v->a[66683] = 18;
	v->a[66684] = anon_sym_PIPE;
	v->a[66685] = anon_sym_RPAREN;
	v->a[66686] = anon_sym_SEMI_SEMI;
	v->a[66687] = anon_sym_AMP_AMP;
	v->a[66688] = anon_sym_PIPE_PIPE;
	v->a[66689] = anon_sym_LT;
	v->a[66690] = anon_sym_GT;
	v->a[66691] = anon_sym_GT_GT;
	v->a[66692] = anon_sym_LT_AMP;
	v->a[66693] = anon_sym_GT_AMP;
	v->a[66694] = anon_sym_GT_PIPE;
	v->a[66695] = anon_sym_LT_AMP_DASH;
	v->a[66696] = anon_sym_GT_AMP_DASH;
	v->a[66697] = anon_sym_LT_LT;
	v->a[66698] = anon_sym_LT_LT_DASH;
	v->a[66699] = anon_sym_AMP;
	small_parse_table_3335(v);
}

/* EOF small_parse_table_666.c */
