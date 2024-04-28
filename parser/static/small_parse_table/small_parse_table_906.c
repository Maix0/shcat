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
	v->a[90600] = sym_expansion;
	v->a[90601] = sym_command_substitution;
	v->a[90602] = sym_process_substitution;
	v->a[90603] = 3;
	v->a[90604] = actions(3);
	v->a[90605] = 1;
	v->a[90606] = sym_comment;
	v->a[90607] = actions(4372);
	v->a[90608] = 5;
	v->a[90609] = sym_file_descriptor;
	v->a[90610] = sym_variable_name;
	v->a[90611] = sym_test_operator;
	v->a[90612] = sym__brace_start;
	v->a[90613] = aux_sym_heredoc_redirect_token1;
	v->a[90614] = actions(4370);
	v->a[90615] = 39;
	v->a[90616] = anon_sym_LPAREN_LPAREN;
	v->a[90617] = anon_sym_SEMI;
	v->a[90618] = anon_sym_PIPE_PIPE;
	v->a[90619] = anon_sym_AMP_AMP;
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = anon_sym_PIPE;
	v->a[90621] = anon_sym_AMP;
	v->a[90622] = anon_sym_LT;
	v->a[90623] = anon_sym_GT;
	v->a[90624] = anon_sym_LT_LT;
	v->a[90625] = anon_sym_GT_GT;
	v->a[90626] = anon_sym_SEMI_SEMI;
	v->a[90627] = anon_sym_SEMI_AMP;
	v->a[90628] = anon_sym_SEMI_SEMI_AMP;
	v->a[90629] = anon_sym_PIPE_AMP;
	v->a[90630] = anon_sym_AMP_GT;
	v->a[90631] = anon_sym_AMP_GT_GT;
	v->a[90632] = anon_sym_LT_AMP;
	v->a[90633] = anon_sym_GT_AMP;
	v->a[90634] = anon_sym_GT_PIPE;
	v->a[90635] = anon_sym_LT_AMP_DASH;
	v->a[90636] = anon_sym_GT_AMP_DASH;
	v->a[90637] = anon_sym_LT_LT_DASH;
	v->a[90638] = anon_sym_LT_LT_LT;
	v->a[90639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = anon_sym_DOLLAR_LBRACK;
	v->a[90641] = anon_sym_DOLLAR;
	v->a[90642] = sym__special_character;
	v->a[90643] = anon_sym_DQUOTE;
	v->a[90644] = sym_raw_string;
	v->a[90645] = sym_ansi_c_string;
	v->a[90646] = aux_sym_number_token1;
	v->a[90647] = aux_sym_number_token2;
	v->a[90648] = anon_sym_DOLLAR_LBRACE;
	v->a[90649] = anon_sym_DOLLAR_LPAREN;
	v->a[90650] = anon_sym_BQUOTE;
	v->a[90651] = anon_sym_DOLLAR_BQUOTE;
	v->a[90652] = anon_sym_LT_LPAREN;
	v->a[90653] = anon_sym_GT_LPAREN;
	v->a[90654] = sym_word;
	v->a[90655] = 5;
	v->a[90656] = actions(3);
	v->a[90657] = 1;
	v->a[90658] = sym_comment;
	v->a[90659] = actions(6075);
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = 1;
	v->a[90661] = sym__special_character;
	v->a[90662] = state(1873);
	v->a[90663] = 1;
	v->a[90664] = aux_sym__literal_repeat1;
	v->a[90665] = actions(1364);
	v->a[90666] = 6;
	v->a[90667] = sym_file_descriptor;
	v->a[90668] = sym_variable_name;
	v->a[90669] = sym_test_operator;
	v->a[90670] = sym__brace_start;
	v->a[90671] = ts_builtin_sym_end;
	v->a[90672] = aux_sym_heredoc_redirect_token1;
	v->a[90673] = actions(1362);
	v->a[90674] = 36;
	v->a[90675] = anon_sym_LPAREN_LPAREN;
	v->a[90676] = anon_sym_SEMI;
	v->a[90677] = anon_sym_PIPE_PIPE;
	v->a[90678] = anon_sym_AMP_AMP;
	v->a[90679] = anon_sym_PIPE;
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = anon_sym_AMP;
	v->a[90681] = anon_sym_LT;
	v->a[90682] = anon_sym_GT;
	v->a[90683] = anon_sym_LT_LT;
	v->a[90684] = anon_sym_GT_GT;
	v->a[90685] = anon_sym_SEMI_SEMI;
	v->a[90686] = anon_sym_PIPE_AMP;
	v->a[90687] = anon_sym_AMP_GT;
	v->a[90688] = anon_sym_AMP_GT_GT;
	v->a[90689] = anon_sym_LT_AMP;
	v->a[90690] = anon_sym_GT_AMP;
	v->a[90691] = anon_sym_GT_PIPE;
	v->a[90692] = anon_sym_LT_AMP_DASH;
	v->a[90693] = anon_sym_GT_AMP_DASH;
	v->a[90694] = anon_sym_LT_LT_DASH;
	v->a[90695] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90696] = anon_sym_DOLLAR_LBRACK;
	v->a[90697] = anon_sym_DOLLAR;
	v->a[90698] = anon_sym_DQUOTE;
	v->a[90699] = sym_raw_string;
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
