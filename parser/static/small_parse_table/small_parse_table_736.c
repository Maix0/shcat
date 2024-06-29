/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_736.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3680(t_small_parse_table_array *v)
{
	v->a[73600] = anon_sym_SEMI_SEMI;
	v->a[73601] = anon_sym_AMP_AMP;
	v->a[73602] = anon_sym_PIPE_PIPE;
	v->a[73603] = anon_sym_LT;
	v->a[73604] = anon_sym_GT;
	v->a[73605] = anon_sym_GT_GT;
	v->a[73606] = anon_sym_AMP_GT;
	v->a[73607] = anon_sym_AMP_GT_GT;
	v->a[73608] = anon_sym_LT_AMP;
	v->a[73609] = anon_sym_GT_AMP;
	v->a[73610] = anon_sym_GT_PIPE;
	v->a[73611] = anon_sym_LT_AMP_DASH;
	v->a[73612] = anon_sym_GT_AMP_DASH;
	v->a[73613] = anon_sym_LT_LT;
	v->a[73614] = anon_sym_LT_LT_DASH;
	v->a[73615] = anon_sym_AMP;
	v->a[73616] = anon_sym_SEMI;
	v->a[73617] = 15;
	v->a[73618] = actions(3);
	v->a[73619] = 1;
	small_parse_table_3681(v);
}

void	small_parse_table_3681(t_small_parse_table_array *v)
{
	v->a[73620] = sym_comment;
	v->a[73621] = actions(1879);
	v->a[73622] = 1;
	v->a[73623] = anon_sym_LPAREN;
	v->a[73624] = actions(1883);
	v->a[73625] = 1;
	v->a[73626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73627] = actions(1885);
	v->a[73628] = 1;
	v->a[73629] = anon_sym_DOLLAR;
	v->a[73630] = actions(1887);
	v->a[73631] = 1;
	v->a[73632] = anon_sym_DQUOTE;
	v->a[73633] = actions(1889);
	v->a[73634] = 1;
	v->a[73635] = anon_sym_DOLLAR_LBRACE;
	v->a[73636] = actions(1891);
	v->a[73637] = 1;
	v->a[73638] = anon_sym_DOLLAR_LPAREN;
	v->a[73639] = actions(1893);
	small_parse_table_3682(v);
}

void	small_parse_table_3682(t_small_parse_table_array *v)
{
	v->a[73640] = 1;
	v->a[73641] = anon_sym_BQUOTE;
	v->a[73642] = actions(1895);
	v->a[73643] = 1;
	v->a[73644] = sym_extglob_pattern;
	v->a[73645] = state(1396);
	v->a[73646] = 1;
	v->a[73647] = aux_sym_case_statement_repeat1;
	v->a[73648] = state(1923);
	v->a[73649] = 1;
	v->a[73650] = sym_case_item;
	v->a[73651] = state(2259);
	v->a[73652] = 1;
	v->a[73653] = sym__case_item_last;
	v->a[73654] = state(2078);
	v->a[73655] = 2;
	v->a[73656] = sym_concatenation;
	v->a[73657] = sym__extglob_blob;
	v->a[73658] = actions(1875);
	v->a[73659] = 3;
	small_parse_table_3683(v);
}

void	small_parse_table_3683(t_small_parse_table_array *v)
{
	v->a[73660] = sym_raw_string;
	v->a[73661] = sym_number;
	v->a[73662] = sym_word;
	v->a[73663] = state(2004);
	v->a[73664] = 5;
	v->a[73665] = sym_arithmetic_expansion;
	v->a[73666] = sym_string;
	v->a[73667] = sym_simple_expansion;
	v->a[73668] = sym_expansion;
	v->a[73669] = sym_command_substitution;
	v->a[73670] = 3;
	v->a[73671] = actions(3);
	v->a[73672] = 1;
	v->a[73673] = sym_comment;
	v->a[73674] = actions(1592);
	v->a[73675] = 2;
	v->a[73676] = sym_file_descriptor;
	v->a[73677] = aux_sym_heredoc_redirect_token1;
	v->a[73678] = actions(1594);
	v->a[73679] = 19;
	small_parse_table_3684(v);
}

void	small_parse_table_3684(t_small_parse_table_array *v)
{
	v->a[73680] = anon_sym_esac;
	v->a[73681] = anon_sym_PIPE;
	v->a[73682] = anon_sym_SEMI_SEMI;
	v->a[73683] = anon_sym_AMP_AMP;
	v->a[73684] = anon_sym_PIPE_PIPE;
	v->a[73685] = anon_sym_LT;
	v->a[73686] = anon_sym_GT;
	v->a[73687] = anon_sym_GT_GT;
	v->a[73688] = anon_sym_AMP_GT;
	v->a[73689] = anon_sym_AMP_GT_GT;
	v->a[73690] = anon_sym_LT_AMP;
	v->a[73691] = anon_sym_GT_AMP;
	v->a[73692] = anon_sym_GT_PIPE;
	v->a[73693] = anon_sym_LT_AMP_DASH;
	v->a[73694] = anon_sym_GT_AMP_DASH;
	v->a[73695] = anon_sym_LT_LT;
	v->a[73696] = anon_sym_LT_LT_DASH;
	v->a[73697] = anon_sym_AMP;
	v->a[73698] = anon_sym_SEMI;
	v->a[73699] = 3;
	small_parse_table_3685(v);
}

/* EOF small_parse_table_736.c */
