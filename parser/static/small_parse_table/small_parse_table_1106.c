/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1106.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5530(t_small_parse_table_array *v)
{
	v->a[110600] = anon_sym_DQUOTE;
	v->a[110601] = sym_raw_string;
	v->a[110602] = sym_ansi_c_string;
	v->a[110603] = anon_sym_DOLLAR_LBRACE;
	v->a[110604] = anon_sym_DOLLAR_BQUOTE;
	v->a[110605] = anon_sym_LT_LPAREN;
	v->a[110606] = anon_sym_GT_LPAREN;
	v->a[110607] = 7;
	v->a[110608] = actions(3);
	v->a[110609] = 1;
	v->a[110610] = sym_comment;
	v->a[110611] = actions(5828);
	v->a[110612] = 1;
	v->a[110613] = sym_file_descriptor;
	v->a[110614] = actions(5826);
	v->a[110615] = 2;
	v->a[110616] = ts_builtin_sym_end;
	v->a[110617] = aux_sym_heredoc_redirect_token1;
	v->a[110618] = actions(5831);
	v->a[110619] = 3;
	small_parse_table_5531(v);
}

void	small_parse_table_5531(t_small_parse_table_array *v)
{
	v->a[110620] = sym_variable_name;
	v->a[110621] = sym_test_operator;
	v->a[110622] = sym__brace_start;
	v->a[110623] = actions(5821);
	v->a[110624] = 9;
	v->a[110625] = anon_sym_SEMI;
	v->a[110626] = anon_sym_PIPE_PIPE;
	v->a[110627] = anon_sym_AMP_AMP;
	v->a[110628] = anon_sym_PIPE;
	v->a[110629] = anon_sym_AMP;
	v->a[110630] = anon_sym_LT_LT;
	v->a[110631] = anon_sym_SEMI_SEMI;
	v->a[110632] = anon_sym_PIPE_AMP;
	v->a[110633] = anon_sym_LT_LT_DASH;
	v->a[110634] = actions(5823);
	v->a[110635] = 11;
	v->a[110636] = anon_sym_LT;
	v->a[110637] = anon_sym_GT;
	v->a[110638] = anon_sym_GT_GT;
	v->a[110639] = anon_sym_AMP_GT;
	small_parse_table_5532(v);
}

void	small_parse_table_5532(t_small_parse_table_array *v)
{
	v->a[110640] = anon_sym_AMP_GT_GT;
	v->a[110641] = anon_sym_LT_AMP;
	v->a[110642] = anon_sym_GT_AMP;
	v->a[110643] = anon_sym_GT_PIPE;
	v->a[110644] = anon_sym_LT_AMP_DASH;
	v->a[110645] = anon_sym_GT_AMP_DASH;
	v->a[110646] = anon_sym_LT_LT_LT;
	v->a[110647] = actions(5819);
	v->a[110648] = 17;
	v->a[110649] = anon_sym_LPAREN_LPAREN;
	v->a[110650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110651] = anon_sym_DOLLAR_LBRACK;
	v->a[110652] = anon_sym_DOLLAR;
	v->a[110653] = sym__special_character;
	v->a[110654] = anon_sym_DQUOTE;
	v->a[110655] = sym_raw_string;
	v->a[110656] = sym_ansi_c_string;
	v->a[110657] = aux_sym_number_token1;
	v->a[110658] = aux_sym_number_token2;
	v->a[110659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5533(v);
}

void	small_parse_table_5533(t_small_parse_table_array *v)
{
	v->a[110660] = anon_sym_DOLLAR_LPAREN;
	v->a[110661] = anon_sym_BQUOTE;
	v->a[110662] = anon_sym_DOLLAR_BQUOTE;
	v->a[110663] = anon_sym_LT_LPAREN;
	v->a[110664] = anon_sym_GT_LPAREN;
	v->a[110665] = sym_word;
	v->a[110666] = 8;
	v->a[110667] = actions(3);
	v->a[110668] = 1;
	v->a[110669] = sym_comment;
	v->a[110670] = actions(5826);
	v->a[110671] = 1;
	v->a[110672] = aux_sym_heredoc_redirect_token1;
	v->a[110673] = actions(5828);
	v->a[110674] = 1;
	v->a[110675] = sym_file_descriptor;
	v->a[110676] = actions(6276);
	v->a[110677] = 1;
	v->a[110678] = anon_sym_RPAREN;
	v->a[110679] = actions(5831);
	small_parse_table_5534(v);
}

void	small_parse_table_5534(t_small_parse_table_array *v)
{
	v->a[110680] = 3;
	v->a[110681] = sym_variable_name;
	v->a[110682] = sym_test_operator;
	v->a[110683] = sym__brace_start;
	v->a[110684] = actions(5821);
	v->a[110685] = 9;
	v->a[110686] = anon_sym_SEMI;
	v->a[110687] = anon_sym_PIPE_PIPE;
	v->a[110688] = anon_sym_AMP_AMP;
	v->a[110689] = anon_sym_PIPE;
	v->a[110690] = anon_sym_AMP;
	v->a[110691] = anon_sym_LT_LT;
	v->a[110692] = anon_sym_SEMI_SEMI;
	v->a[110693] = anon_sym_PIPE_AMP;
	v->a[110694] = anon_sym_LT_LT_DASH;
	v->a[110695] = actions(5823);
	v->a[110696] = 11;
	v->a[110697] = anon_sym_LT;
	v->a[110698] = anon_sym_GT;
	v->a[110699] = anon_sym_GT_GT;
	small_parse_table_5535(v);
}

/* EOF small_parse_table_1106.c */
