/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_876.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4380(t_small_parse_table_array *v)
{
	v->a[87600] = 1;
	v->a[87601] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87602] = actions(1965);
	v->a[87603] = 1;
	v->a[87604] = anon_sym_DOLLAR;
	v->a[87605] = actions(1967);
	v->a[87606] = 1;
	v->a[87607] = anon_sym_DQUOTE;
	v->a[87608] = actions(1969);
	v->a[87609] = 1;
	v->a[87610] = anon_sym_DOLLAR_LBRACE;
	v->a[87611] = actions(1971);
	v->a[87612] = 1;
	v->a[87613] = anon_sym_DOLLAR_LPAREN;
	v->a[87614] = actions(1973);
	v->a[87615] = 1;
	v->a[87616] = anon_sym_BQUOTE;
	v->a[87617] = actions(1975);
	v->a[87618] = 1;
	v->a[87619] = sym_extglob_pattern;
	small_parse_table_4381(v);
}

void	small_parse_table_4381(t_small_parse_table_array *v)
{
	v->a[87620] = state(2266);
	v->a[87621] = 2;
	v->a[87622] = sym_concatenation;
	v->a[87623] = sym__extglob_blob;
	v->a[87624] = actions(3555);
	v->a[87625] = 3;
	v->a[87626] = sym_raw_string;
	v->a[87627] = sym_number;
	v->a[87628] = sym_word;
	v->a[87629] = state(2165);
	v->a[87630] = 5;
	v->a[87631] = sym_arithmetic_expansion;
	v->a[87632] = sym_string;
	v->a[87633] = sym_simple_expansion;
	v->a[87634] = sym_expansion;
	v->a[87635] = sym_command_substitution;
	v->a[87636] = 10;
	v->a[87637] = actions(3);
	v->a[87638] = 1;
	v->a[87639] = sym_comment;
	small_parse_table_4382(v);
}

void	small_parse_table_4382(t_small_parse_table_array *v)
{
	v->a[87640] = actions(497);
	v->a[87641] = 1;
	v->a[87642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87643] = actions(501);
	v->a[87644] = 1;
	v->a[87645] = anon_sym_DQUOTE;
	v->a[87646] = actions(503);
	v->a[87647] = 1;
	v->a[87648] = anon_sym_DOLLAR_LBRACE;
	v->a[87649] = actions(505);
	v->a[87650] = 1;
	v->a[87651] = anon_sym_DOLLAR_LPAREN;
	v->a[87652] = actions(507);
	v->a[87653] = 1;
	v->a[87654] = anon_sym_BQUOTE;
	v->a[87655] = actions(3425);
	v->a[87656] = 1;
	v->a[87657] = sym__bare_dollar;
	v->a[87658] = actions(3557);
	v->a[87659] = 1;
	small_parse_table_4383(v);
}

void	small_parse_table_4383(t_small_parse_table_array *v)
{
	v->a[87660] = anon_sym_DOLLAR;
	v->a[87661] = actions(3423);
	v->a[87662] = 5;
	v->a[87663] = aux_sym_concatenation_token1;
	v->a[87664] = sym_raw_string;
	v->a[87665] = sym_number;
	v->a[87666] = sym__comment_word;
	v->a[87667] = sym_word;
	v->a[87668] = state(431);
	v->a[87669] = 5;
	v->a[87670] = sym_arithmetic_expansion;
	v->a[87671] = sym_string;
	v->a[87672] = sym_simple_expansion;
	v->a[87673] = sym_expansion;
	v->a[87674] = sym_command_substitution;
	v->a[87675] = 10;
	v->a[87676] = actions(3);
	v->a[87677] = 1;
	v->a[87678] = sym_comment;
	v->a[87679] = actions(3361);
	small_parse_table_4384(v);
}

void	small_parse_table_4384(t_small_parse_table_array *v)
{
	v->a[87680] = 1;
	v->a[87681] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87682] = actions(3365);
	v->a[87683] = 1;
	v->a[87684] = anon_sym_DQUOTE;
	v->a[87685] = actions(3367);
	v->a[87686] = 1;
	v->a[87687] = anon_sym_DOLLAR_LBRACE;
	v->a[87688] = actions(3369);
	v->a[87689] = 1;
	v->a[87690] = anon_sym_DOLLAR_LPAREN;
	v->a[87691] = actions(3371);
	v->a[87692] = 1;
	v->a[87693] = anon_sym_BQUOTE;
	v->a[87694] = actions(3373);
	v->a[87695] = 1;
	v->a[87696] = sym__bare_dollar;
	v->a[87697] = actions(3559);
	v->a[87698] = 1;
	v->a[87699] = anon_sym_DOLLAR;
	small_parse_table_4385(v);
}

/* EOF small_parse_table_876.c */
