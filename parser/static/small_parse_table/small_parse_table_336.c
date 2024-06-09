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
	v->a[33600] = 1;
	v->a[33601] = aux_sym_number_token1;
	v->a[33602] = actions(858);
	v->a[33603] = 1;
	v->a[33604] = aux_sym_number_token2;
	v->a[33605] = actions(861);
	v->a[33606] = 1;
	v->a[33607] = anon_sym_DOLLAR_LBRACE;
	v->a[33608] = actions(864);
	v->a[33609] = 1;
	v->a[33610] = anon_sym_DOLLAR_LPAREN;
	v->a[33611] = actions(867);
	v->a[33612] = 1;
	v->a[33613] = anon_sym_BQUOTE;
	v->a[33614] = actions(1382);
	v->a[33615] = 2;
	v->a[33616] = sym_raw_string;
	v->a[33617] = sym_word;
	v->a[33618] = state(383);
	v->a[33619] = 2;
	small_parse_table_1681(v);
}

void	small_parse_table_1681(t_small_parse_table_array *v)
{
	v->a[33620] = sym_concatenation;
	v->a[33621] = aux_sym_for_statement_repeat1;
	v->a[33622] = state(805);
	v->a[33623] = 6;
	v->a[33624] = sym_arithmetic_expansion;
	v->a[33625] = sym_string;
	v->a[33626] = sym_number;
	v->a[33627] = sym_simple_expansion;
	v->a[33628] = sym_expansion;
	v->a[33629] = sym_command_substitution;
	v->a[33630] = actions(636);
	v->a[33631] = 16;
	v->a[33632] = anon_sym_PIPE;
	v->a[33633] = anon_sym_AMP_AMP;
	v->a[33634] = anon_sym_PIPE_PIPE;
	v->a[33635] = anon_sym_LT;
	v->a[33636] = anon_sym_GT;
	v->a[33637] = anon_sym_GT_GT;
	v->a[33638] = anon_sym_AMP_GT;
	v->a[33639] = anon_sym_AMP_GT_GT;
	small_parse_table_1682(v);
}

void	small_parse_table_1682(t_small_parse_table_array *v)
{
	v->a[33640] = anon_sym_LT_AMP;
	v->a[33641] = anon_sym_GT_AMP;
	v->a[33642] = anon_sym_GT_PIPE;
	v->a[33643] = anon_sym_LT_AMP_DASH;
	v->a[33644] = anon_sym_GT_AMP_DASH;
	v->a[33645] = anon_sym_LT_LT;
	v->a[33646] = anon_sym_LT_LT_DASH;
	v->a[33647] = aux_sym_heredoc_redirect_token1;
	v->a[33648] = 3;
	v->a[33649] = actions(3);
	v->a[33650] = 1;
	v->a[33651] = sym_comment;
	v->a[33652] = actions(1247);
	v->a[33653] = 3;
	v->a[33654] = sym_file_descriptor;
	v->a[33655] = sym__concat;
	v->a[33656] = sym__bare_dollar;
	v->a[33657] = actions(1249);
	v->a[33658] = 32;
	v->a[33659] = anon_sym_LPAREN;
	small_parse_table_1683(v);
}

void	small_parse_table_1683(t_small_parse_table_array *v)
{
	v->a[33660] = anon_sym_PIPE;
	v->a[33661] = anon_sym_RPAREN;
	v->a[33662] = anon_sym_SEMI_SEMI;
	v->a[33663] = anon_sym_AMP_AMP;
	v->a[33664] = anon_sym_PIPE_PIPE;
	v->a[33665] = anon_sym_LT;
	v->a[33666] = anon_sym_GT;
	v->a[33667] = anon_sym_GT_GT;
	v->a[33668] = anon_sym_AMP_GT;
	v->a[33669] = anon_sym_AMP_GT_GT;
	v->a[33670] = anon_sym_LT_AMP;
	v->a[33671] = anon_sym_GT_AMP;
	v->a[33672] = anon_sym_GT_PIPE;
	v->a[33673] = anon_sym_LT_AMP_DASH;
	v->a[33674] = anon_sym_GT_AMP_DASH;
	v->a[33675] = anon_sym_LT_LT;
	v->a[33676] = anon_sym_LT_LT_DASH;
	v->a[33677] = aux_sym_heredoc_redirect_token1;
	v->a[33678] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33679] = anon_sym_AMP;
	small_parse_table_1684(v);
}

void	small_parse_table_1684(t_small_parse_table_array *v)
{
	v->a[33680] = aux_sym_concatenation_token1;
	v->a[33681] = anon_sym_DOLLAR;
	v->a[33682] = anon_sym_DQUOTE;
	v->a[33683] = sym_raw_string;
	v->a[33684] = aux_sym_number_token1;
	v->a[33685] = aux_sym_number_token2;
	v->a[33686] = anon_sym_DOLLAR_LBRACE;
	v->a[33687] = anon_sym_DOLLAR_LPAREN;
	v->a[33688] = anon_sym_BQUOTE;
	v->a[33689] = sym_word;
	v->a[33690] = anon_sym_SEMI;
	v->a[33691] = 3;
	v->a[33692] = actions(3);
	v->a[33693] = 1;
	v->a[33694] = sym_comment;
	v->a[33695] = actions(1192);
	v->a[33696] = 3;
	v->a[33697] = sym_file_descriptor;
	v->a[33698] = sym__concat;
	v->a[33699] = sym__bare_dollar;
	small_parse_table_1685(v);
}

/* EOF small_parse_table_336.c */
