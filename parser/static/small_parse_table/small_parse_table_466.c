/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_466.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2330(t_small_parse_table_array *v)
{
	v->a[46600] = 1;
	v->a[46601] = anon_sym_DOLLAR_LPAREN;
	v->a[46602] = actions(1651);
	v->a[46603] = 1;
	v->a[46604] = anon_sym_BQUOTE;
	v->a[46605] = actions(1653);
	v->a[46606] = 1;
	v->a[46607] = sym_extglob_pattern;
	v->a[46608] = actions(1685);
	v->a[46609] = 1;
	v->a[46610] = anon_sym_esac;
	v->a[46611] = state(931);
	v->a[46612] = 1;
	v->a[46613] = sym_terminator;
	v->a[46614] = state(1020);
	v->a[46615] = 1;
	v->a[46616] = aux_sym_case_statement_repeat1;
	v->a[46617] = state(1713);
	v->a[46618] = 1;
	v->a[46619] = sym_case_item;
	small_parse_table_2331(v);
}

void	small_parse_table_2331(t_small_parse_table_array *v)
{
	v->a[46620] = state(2004);
	v->a[46621] = 1;
	v->a[46622] = sym__case_item_last;
	v->a[46623] = state(1873);
	v->a[46624] = 2;
	v->a[46625] = sym_concatenation;
	v->a[46626] = sym__extglob_blob;
	v->a[46627] = actions(1633);
	v->a[46628] = 3;
	v->a[46629] = sym_raw_string;
	v->a[46630] = sym_number;
	v->a[46631] = sym_word;
	v->a[46632] = actions(1639);
	v->a[46633] = 4;
	v->a[46634] = anon_sym_SEMI_SEMI;
	v->a[46635] = aux_sym_heredoc_redirect_token1;
	v->a[46636] = anon_sym_AMP;
	v->a[46637] = anon_sym_SEMI;
	v->a[46638] = state(1806);
	v->a[46639] = 5;
	small_parse_table_2332(v);
}

void	small_parse_table_2332(t_small_parse_table_array *v)
{
	v->a[46640] = sym_arithmetic_expansion;
	v->a[46641] = sym_string;
	v->a[46642] = sym_simple_expansion;
	v->a[46643] = sym_expansion;
	v->a[46644] = sym_command_substitution;
	v->a[46645] = 18;
	v->a[46646] = actions(3);
	v->a[46647] = 1;
	v->a[46648] = sym_comment;
	v->a[46649] = actions(1637);
	v->a[46650] = 1;
	v->a[46651] = anon_sym_LPAREN;
	v->a[46652] = actions(1641);
	v->a[46653] = 1;
	v->a[46654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46655] = actions(1643);
	v->a[46656] = 1;
	v->a[46657] = anon_sym_DOLLAR;
	v->a[46658] = actions(1645);
	v->a[46659] = 1;
	small_parse_table_2333(v);
}

void	small_parse_table_2333(t_small_parse_table_array *v)
{
	v->a[46660] = anon_sym_DQUOTE;
	v->a[46661] = actions(1647);
	v->a[46662] = 1;
	v->a[46663] = anon_sym_DOLLAR_LBRACE;
	v->a[46664] = actions(1649);
	v->a[46665] = 1;
	v->a[46666] = anon_sym_DOLLAR_LPAREN;
	v->a[46667] = actions(1651);
	v->a[46668] = 1;
	v->a[46669] = anon_sym_BQUOTE;
	v->a[46670] = actions(1653);
	v->a[46671] = 1;
	v->a[46672] = sym_extglob_pattern;
	v->a[46673] = actions(1687);
	v->a[46674] = 1;
	v->a[46675] = anon_sym_esac;
	v->a[46676] = state(932);
	v->a[46677] = 1;
	v->a[46678] = sym_terminator;
	v->a[46679] = state(1024);
	small_parse_table_2334(v);
}

void	small_parse_table_2334(t_small_parse_table_array *v)
{
	v->a[46680] = 1;
	v->a[46681] = aux_sym_case_statement_repeat1;
	v->a[46682] = state(1713);
	v->a[46683] = 1;
	v->a[46684] = sym_case_item;
	v->a[46685] = state(2124);
	v->a[46686] = 1;
	v->a[46687] = sym__case_item_last;
	v->a[46688] = state(1873);
	v->a[46689] = 2;
	v->a[46690] = sym_concatenation;
	v->a[46691] = sym__extglob_blob;
	v->a[46692] = actions(1633);
	v->a[46693] = 3;
	v->a[46694] = sym_raw_string;
	v->a[46695] = sym_number;
	v->a[46696] = sym_word;
	v->a[46697] = actions(1639);
	v->a[46698] = 4;
	v->a[46699] = anon_sym_SEMI_SEMI;
	small_parse_table_2335(v);
}

/* EOF small_parse_table_466.c */
