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
	v->a[90600] = state(646);
	v->a[90601] = 5;
	v->a[90602] = sym_arithmetic_expansion;
	v->a[90603] = sym_string;
	v->a[90604] = sym_simple_expansion;
	v->a[90605] = sym_expansion;
	v->a[90606] = sym_command_substitution;
	v->a[90607] = 10;
	v->a[90608] = actions(3);
	v->a[90609] = 1;
	v->a[90610] = sym_comment;
	v->a[90611] = actions(749);
	v->a[90612] = 1;
	v->a[90613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90614] = actions(751);
	v->a[90615] = 1;
	v->a[90616] = anon_sym_DOLLAR;
	v->a[90617] = actions(753);
	v->a[90618] = 1;
	v->a[90619] = anon_sym_DQUOTE;
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = actions(755);
	v->a[90621] = 1;
	v->a[90622] = anon_sym_DOLLAR_LBRACE;
	v->a[90623] = actions(757);
	v->a[90624] = 1;
	v->a[90625] = anon_sym_DOLLAR_LPAREN;
	v->a[90626] = actions(759);
	v->a[90627] = 1;
	v->a[90628] = anon_sym_BQUOTE;
	v->a[90629] = state(480);
	v->a[90630] = 2;
	v->a[90631] = sym_concatenation;
	v->a[90632] = aux_sym_for_statement_repeat1;
	v->a[90633] = actions(1384);
	v->a[90634] = 3;
	v->a[90635] = sym_raw_string;
	v->a[90636] = sym_number;
	v->a[90637] = sym_word;
	v->a[90638] = state(941);
	v->a[90639] = 5;
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = sym_arithmetic_expansion;
	v->a[90641] = sym_string;
	v->a[90642] = sym_simple_expansion;
	v->a[90643] = sym_expansion;
	v->a[90644] = sym_command_substitution;
	v->a[90645] = 3;
	v->a[90646] = actions(1094);
	v->a[90647] = 1;
	v->a[90648] = sym_comment;
	v->a[90649] = actions(2697);
	v->a[90650] = 7;
	v->a[90651] = anon_sym_PIPE;
	v->a[90652] = anon_sym_LT;
	v->a[90653] = anon_sym_GT;
	v->a[90654] = anon_sym_AMP_GT;
	v->a[90655] = anon_sym_LT_AMP;
	v->a[90656] = anon_sym_GT_AMP;
	v->a[90657] = anon_sym_LT_LT;
	v->a[90658] = actions(2695);
	v->a[90659] = 9;
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = sym_file_descriptor;
	v->a[90661] = anon_sym_AMP_AMP;
	v->a[90662] = anon_sym_PIPE_PIPE;
	v->a[90663] = anon_sym_GT_GT;
	v->a[90664] = anon_sym_AMP_GT_GT;
	v->a[90665] = anon_sym_GT_PIPE;
	v->a[90666] = anon_sym_LT_AMP_DASH;
	v->a[90667] = anon_sym_GT_AMP_DASH;
	v->a[90668] = anon_sym_LT_LT_DASH;
	v->a[90669] = 3;
	v->a[90670] = actions(1094);
	v->a[90671] = 1;
	v->a[90672] = sym_comment;
	v->a[90673] = actions(2712);
	v->a[90674] = 7;
	v->a[90675] = anon_sym_PIPE;
	v->a[90676] = anon_sym_LT;
	v->a[90677] = anon_sym_GT;
	v->a[90678] = anon_sym_AMP_GT;
	v->a[90679] = anon_sym_LT_AMP;
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = anon_sym_GT_AMP;
	v->a[90681] = anon_sym_LT_LT;
	v->a[90682] = actions(2710);
	v->a[90683] = 9;
	v->a[90684] = sym_file_descriptor;
	v->a[90685] = anon_sym_AMP_AMP;
	v->a[90686] = anon_sym_PIPE_PIPE;
	v->a[90687] = anon_sym_GT_GT;
	v->a[90688] = anon_sym_AMP_GT_GT;
	v->a[90689] = anon_sym_GT_PIPE;
	v->a[90690] = anon_sym_LT_AMP_DASH;
	v->a[90691] = anon_sym_GT_AMP_DASH;
	v->a[90692] = anon_sym_LT_LT_DASH;
	v->a[90693] = 10;
	v->a[90694] = actions(3);
	v->a[90695] = 1;
	v->a[90696] = sym_comment;
	v->a[90697] = actions(3200);
	v->a[90698] = 1;
	v->a[90699] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
