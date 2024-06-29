/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_906.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4530(t_small_parse_table_array *v)
{
	v->a[90600] = actions(3668);
	v->a[90601] = 1;
	v->a[90602] = anon_sym_DQUOTE;
	v->a[90603] = state(1863);
	v->a[90604] = 1;
	v->a[90605] = aux_sym_string_repeat1;
	v->a[90606] = state(1963);
	v->a[90607] = 4;
	v->a[90608] = sym_arithmetic_expansion;
	v->a[90609] = sym_simple_expansion;
	v->a[90610] = sym_expansion;
	v->a[90611] = sym_command_substitution;
	v->a[90612] = 10;
	v->a[90613] = actions(3);
	v->a[90614] = 1;
	v->a[90615] = sym_comment;
	v->a[90616] = actions(3414);
	v->a[90617] = 1;
	v->a[90618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90619] = actions(3420);
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = 1;
	v->a[90621] = sym_string_content;
	v->a[90622] = actions(3422);
	v->a[90623] = 1;
	v->a[90624] = anon_sym_DOLLAR_LBRACE;
	v->a[90625] = actions(3424);
	v->a[90626] = 1;
	v->a[90627] = anon_sym_DOLLAR_LPAREN;
	v->a[90628] = actions(3426);
	v->a[90629] = 1;
	v->a[90630] = anon_sym_BQUOTE;
	v->a[90631] = actions(3670);
	v->a[90632] = 1;
	v->a[90633] = anon_sym_DOLLAR;
	v->a[90634] = actions(3672);
	v->a[90635] = 1;
	v->a[90636] = anon_sym_DQUOTE;
	v->a[90637] = state(1889);
	v->a[90638] = 1;
	v->a[90639] = aux_sym_string_repeat1;
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = state(1963);
	v->a[90641] = 4;
	v->a[90642] = sym_arithmetic_expansion;
	v->a[90643] = sym_simple_expansion;
	v->a[90644] = sym_expansion;
	v->a[90645] = sym_command_substitution;
	v->a[90646] = 4;
	v->a[90647] = actions(3);
	v->a[90648] = 1;
	v->a[90649] = sym_comment;
	v->a[90650] = actions(3676);
	v->a[90651] = 1;
	v->a[90652] = anon_sym_esac;
	v->a[90653] = actions(3678);
	v->a[90654] = 1;
	v->a[90655] = sym_extglob_pattern;
	v->a[90656] = actions(3674);
	v->a[90657] = 10;
	v->a[90658] = anon_sym_LPAREN;
	v->a[90659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = anon_sym_DOLLAR;
	v->a[90661] = anon_sym_DQUOTE;
	v->a[90662] = sym_raw_string;
	v->a[90663] = sym_number;
	v->a[90664] = anon_sym_DOLLAR_LBRACE;
	v->a[90665] = anon_sym_DOLLAR_LPAREN;
	v->a[90666] = anon_sym_BQUOTE;
	v->a[90667] = sym_word;
	v->a[90668] = 6;
	v->a[90669] = actions(1074);
	v->a[90670] = 1;
	v->a[90671] = sym_comment;
	v->a[90672] = actions(3440);
	v->a[90673] = 1;
	v->a[90674] = anon_sym_LT_LT;
	v->a[90675] = actions(3442);
	v->a[90676] = 1;
	v->a[90677] = anon_sym_LT_LT_DASH;
	v->a[90678] = actions(3684);
	v->a[90679] = 2;
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = anon_sym_LT_AMP_DASH;
	v->a[90681] = anon_sym_GT_AMP_DASH;
	v->a[90682] = actions(3682);
	v->a[90683] = 3;
	v->a[90684] = anon_sym_GT_GT;
	v->a[90685] = anon_sym_AMP_GT_GT;
	v->a[90686] = anon_sym_GT_PIPE;
	v->a[90687] = actions(3680);
	v->a[90688] = 5;
	v->a[90689] = anon_sym_LT;
	v->a[90690] = anon_sym_GT;
	v->a[90691] = anon_sym_AMP_GT;
	v->a[90692] = anon_sym_LT_AMP;
	v->a[90693] = anon_sym_GT_AMP;
	v->a[90694] = 10;
	v->a[90695] = actions(3);
	v->a[90696] = 1;
	v->a[90697] = sym_comment;
	v->a[90698] = actions(3414);
	v->a[90699] = 1;
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
