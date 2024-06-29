/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_336.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1680(t_small_parse_table_array *v)
{
	v->a[33600] = anon_sym_PIPE;
	v->a[33601] = anon_sym_RPAREN;
	v->a[33602] = anon_sym_SEMI_SEMI;
	v->a[33603] = anon_sym_AMP_AMP;
	v->a[33604] = anon_sym_PIPE_PIPE;
	v->a[33605] = anon_sym_LT;
	v->a[33606] = anon_sym_GT;
	v->a[33607] = anon_sym_GT_GT;
	v->a[33608] = anon_sym_AMP_GT;
	v->a[33609] = anon_sym_AMP_GT_GT;
	v->a[33610] = anon_sym_LT_AMP;
	v->a[33611] = anon_sym_GT_AMP;
	v->a[33612] = anon_sym_GT_PIPE;
	v->a[33613] = anon_sym_LT_AMP_DASH;
	v->a[33614] = anon_sym_GT_AMP_DASH;
	v->a[33615] = anon_sym_LT_LT;
	v->a[33616] = anon_sym_LT_LT_DASH;
	v->a[33617] = aux_sym_heredoc_redirect_token1;
	v->a[33618] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33619] = anon_sym_AMP;
	small_parse_table_1681(v);
}

void	small_parse_table_1681(t_small_parse_table_array *v)
{
	v->a[33620] = aux_sym_concatenation_token1;
	v->a[33621] = anon_sym_DOLLAR;
	v->a[33622] = anon_sym_DQUOTE;
	v->a[33623] = sym_raw_string;
	v->a[33624] = sym_number;
	v->a[33625] = anon_sym_DOLLAR_LBRACE;
	v->a[33626] = anon_sym_DOLLAR_LPAREN;
	v->a[33627] = anon_sym_BQUOTE;
	v->a[33628] = sym_word;
	v->a[33629] = anon_sym_SEMI;
	v->a[33630] = 21;
	v->a[33631] = actions(3);
	v->a[33632] = 1;
	v->a[33633] = sym_comment;
	v->a[33634] = actions(17);
	v->a[33635] = 1;
	v->a[33636] = anon_sym_LPAREN;
	v->a[33637] = actions(27);
	v->a[33638] = 1;
	v->a[33639] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1682(v);
}

void	small_parse_table_1682(t_small_parse_table_array *v)
{
	v->a[33640] = actions(29);
	v->a[33641] = 1;
	v->a[33642] = anon_sym_DOLLAR;
	v->a[33643] = actions(31);
	v->a[33644] = 1;
	v->a[33645] = anon_sym_DQUOTE;
	v->a[33646] = actions(35);
	v->a[33647] = 1;
	v->a[33648] = anon_sym_DOLLAR_LBRACE;
	v->a[33649] = actions(37);
	v->a[33650] = 1;
	v->a[33651] = anon_sym_DOLLAR_LPAREN;
	v->a[33652] = actions(39);
	v->a[33653] = 1;
	v->a[33654] = anon_sym_BQUOTE;
	v->a[33655] = actions(43);
	v->a[33656] = 1;
	v->a[33657] = sym_variable_name;
	v->a[33658] = actions(1068);
	v->a[33659] = 1;
	small_parse_table_1683(v);
}

void	small_parse_table_1683(t_small_parse_table_array *v)
{
	v->a[33660] = sym_file_descriptor;
	v->a[33661] = state(183);
	v->a[33662] = 1;
	v->a[33663] = sym_command_name;
	v->a[33664] = state(636);
	v->a[33665] = 1;
	v->a[33666] = sym_concatenation;
	v->a[33667] = state(693);
	v->a[33668] = 1;
	v->a[33669] = sym_variable_assignment;
	v->a[33670] = state(743);
	v->a[33671] = 1;
	v->a[33672] = aux_sym_command_repeat1;
	v->a[33673] = state(1283);
	v->a[33674] = 1;
	v->a[33675] = sym_subshell;
	v->a[33676] = state(1298);
	v->a[33677] = 1;
	v->a[33678] = sym_command;
	v->a[33679] = state(1343);
	small_parse_table_1684(v);
}

void	small_parse_table_1684(t_small_parse_table_array *v)
{
	v->a[33680] = 1;
	v->a[33681] = sym_file_redirect;
	v->a[33682] = actions(1066);
	v->a[33683] = 2;
	v->a[33684] = anon_sym_LT_AMP_DASH;
	v->a[33685] = anon_sym_GT_AMP_DASH;
	v->a[33686] = actions(33);
	v->a[33687] = 3;
	v->a[33688] = sym_raw_string;
	v->a[33689] = sym_number;
	v->a[33690] = sym_word;
	v->a[33691] = state(291);
	v->a[33692] = 5;
	v->a[33693] = sym_arithmetic_expansion;
	v->a[33694] = sym_string;
	v->a[33695] = sym_simple_expansion;
	v->a[33696] = sym_expansion;
	v->a[33697] = sym_command_substitution;
	v->a[33698] = actions(1064);
	v->a[33699] = 8;
	small_parse_table_1685(v);
}

/* EOF small_parse_table_336.c */
