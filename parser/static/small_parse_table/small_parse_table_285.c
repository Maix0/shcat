/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_285.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1425(t_small_parse_table_array *v)
{
	v->a[28500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28501] = anon_sym_DOLLAR;
	v->a[28502] = anon_sym_DQUOTE;
	v->a[28503] = sym_raw_string;
	v->a[28504] = sym_number;
	v->a[28505] = anon_sym_DOLLAR_LBRACE;
	v->a[28506] = anon_sym_DOLLAR_LPAREN;
	v->a[28507] = sym_word;
	v->a[28508] = 6;
	v->a[28509] = actions(3);
	v->a[28510] = 1;
	v->a[28511] = sym_comment;
	v->a[28512] = actions(367);
	v->a[28513] = 1;
	v->a[28514] = sym_file_descriptor;
	v->a[28515] = actions(1083);
	v->a[28516] = 1;
	v->a[28517] = sym_variable_name;
	v->a[28518] = actions(1081);
	v->a[28519] = 2;
	small_parse_table_1426(v);
}

void	small_parse_table_1426(t_small_parse_table_array *v)
{
	v->a[28520] = aux_sym__simple_variable_name_token1;
	v->a[28521] = aux_sym__multiline_variable_name_token1;
	v->a[28522] = actions(1079);
	v->a[28523] = 8;
	v->a[28524] = anon_sym_BANG;
	v->a[28525] = anon_sym_DASH;
	v->a[28526] = anon_sym_STAR;
	v->a[28527] = anon_sym_QMARK;
	v->a[28528] = anon_sym_DOLLAR;
	v->a[28529] = anon_sym_POUND;
	v->a[28530] = anon_sym_AT;
	v->a[28531] = anon_sym_0;
	v->a[28532] = actions(361);
	v->a[28533] = 20;
	v->a[28534] = anon_sym_PIPE;
	v->a[28535] = anon_sym_AMP_AMP;
	v->a[28536] = anon_sym_PIPE_PIPE;
	v->a[28537] = anon_sym_LT;
	v->a[28538] = anon_sym_GT;
	v->a[28539] = anon_sym_GT_GT;
	small_parse_table_1427(v);
}

void	small_parse_table_1427(t_small_parse_table_array *v)
{
	v->a[28540] = anon_sym_LT_AMP;
	v->a[28541] = anon_sym_GT_AMP;
	v->a[28542] = anon_sym_GT_PIPE;
	v->a[28543] = anon_sym_LT_GT;
	v->a[28544] = anon_sym_LT_LT;
	v->a[28545] = anon_sym_LT_LT_DASH;
	v->a[28546] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28547] = anon_sym_DQUOTE;
	v->a[28548] = sym_raw_string;
	v->a[28549] = sym_number;
	v->a[28550] = anon_sym_DOLLAR_LBRACE;
	v->a[28551] = anon_sym_DOLLAR_LPAREN;
	v->a[28552] = anon_sym_BQUOTE;
	v->a[28553] = sym_word;
	v->a[28554] = 11;
	v->a[28555] = actions(3);
	v->a[28556] = 1;
	v->a[28557] = sym_comment;
	v->a[28558] = actions(678);
	v->a[28559] = 1;
	small_parse_table_1428(v);
}

void	small_parse_table_1428(t_small_parse_table_array *v)
{
	v->a[28560] = sym_file_descriptor;
	v->a[28561] = actions(962);
	v->a[28562] = 1;
	v->a[28563] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28564] = actions(964);
	v->a[28565] = 1;
	v->a[28566] = anon_sym_DOLLAR;
	v->a[28567] = actions(966);
	v->a[28568] = 1;
	v->a[28569] = anon_sym_DQUOTE;
	v->a[28570] = actions(968);
	v->a[28571] = 1;
	v->a[28572] = anon_sym_DOLLAR_LBRACE;
	v->a[28573] = actions(970);
	v->a[28574] = 1;
	v->a[28575] = anon_sym_DOLLAR_LPAREN;
	v->a[28576] = state(332);
	v->a[28577] = 2;
	v->a[28578] = sym_concatenation;
	v->a[28579] = aux_sym_for_statement_repeat1;
	small_parse_table_1429(v);
}

void	small_parse_table_1429(t_small_parse_table_array *v)
{
	v->a[28580] = actions(1033);
	v->a[28581] = 3;
	v->a[28582] = sym_raw_string;
	v->a[28583] = sym_number;
	v->a[28584] = sym_word;
	v->a[28585] = state(623);
	v->a[28586] = 5;
	v->a[28587] = sym_arithmetic_expansion;
	v->a[28588] = sym_string;
	v->a[28589] = sym_simple_expansion;
	v->a[28590] = sym_expansion;
	v->a[28591] = sym_command_substitution;
	v->a[28592] = actions(676);
	v->a[28593] = 16;
	v->a[28594] = anon_sym_PIPE;
	v->a[28595] = anon_sym_SEMI_SEMI;
	v->a[28596] = anon_sym_AMP_AMP;
	v->a[28597] = anon_sym_PIPE_PIPE;
	v->a[28598] = anon_sym_LT;
	v->a[28599] = anon_sym_GT;
	small_parse_table_1430(v);
}

/* EOF small_parse_table_285.c */
