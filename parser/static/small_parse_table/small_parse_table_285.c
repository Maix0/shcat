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
	v->a[28500] = 1;
	v->a[28501] = sym_comment;
	v->a[28502] = actions(1021);
	v->a[28503] = 1;
	v->a[28504] = anon_sym_EQ;
	v->a[28505] = actions(1023);
	v->a[28506] = 1;
	v->a[28507] = anon_sym_QMARK;
	v->a[28508] = actions(1093);
	v->a[28509] = 1;
	v->a[28510] = anon_sym_RPAREN_RPAREN;
	v->a[28511] = actions(850);
	v->a[28512] = 2;
	v->a[28513] = anon_sym_LT;
	v->a[28514] = anon_sym_GT;
	v->a[28515] = actions(852);
	v->a[28516] = 2;
	v->a[28517] = anon_sym_GT_GT;
	v->a[28518] = anon_sym_LT_LT;
	v->a[28519] = actions(860);
	small_parse_table_1426(v);
}

void	small_parse_table_1426(t_small_parse_table_array *v)
{
	v->a[28520] = 2;
	v->a[28521] = anon_sym_EQ_EQ;
	v->a[28522] = anon_sym_BANG_EQ;
	v->a[28523] = actions(862);
	v->a[28524] = 2;
	v->a[28525] = anon_sym_LT_EQ;
	v->a[28526] = anon_sym_GT_EQ;
	v->a[28527] = actions(864);
	v->a[28528] = 2;
	v->a[28529] = anon_sym_PLUS;
	v->a[28530] = anon_sym_DASH;
	v->a[28531] = actions(868);
	v->a[28532] = 2;
	v->a[28533] = anon_sym_PLUS_PLUS2;
	v->a[28534] = anon_sym_DASH_DASH2;
	v->a[28535] = actions(866);
	v->a[28536] = 3;
	v->a[28537] = anon_sym_STAR;
	v->a[28538] = anon_sym_SLASH;
	v->a[28539] = anon_sym_PERCENT;
	small_parse_table_1427(v);
}

void	small_parse_table_1427(t_small_parse_table_array *v)
{
	v->a[28540] = actions(1079);
	v->a[28541] = 10;
	v->a[28542] = anon_sym_PLUS_EQ;
	v->a[28543] = anon_sym_DASH_EQ;
	v->a[28544] = anon_sym_STAR_EQ;
	v->a[28545] = anon_sym_SLASH_EQ;
	v->a[28546] = anon_sym_PERCENT_EQ;
	v->a[28547] = anon_sym_LT_LT_EQ;
	v->a[28548] = anon_sym_GT_GT_EQ;
	v->a[28549] = anon_sym_AMP_EQ;
	v->a[28550] = anon_sym_CARET_EQ;
	v->a[28551] = anon_sym_PIPE_EQ;
	v->a[28552] = 6;
	v->a[28553] = actions(3);
	v->a[28554] = 1;
	v->a[28555] = sym_comment;
	v->a[28556] = actions(1099);
	v->a[28557] = 1;
	v->a[28558] = aux_sym_concatenation_token1;
	v->a[28559] = actions(1101);
	small_parse_table_1428(v);
}

void	small_parse_table_1428(t_small_parse_table_array *v)
{
	v->a[28560] = 1;
	v->a[28561] = sym__concat;
	v->a[28562] = state(344);
	v->a[28563] = 1;
	v->a[28564] = aux_sym_concatenation_repeat1;
	v->a[28565] = actions(1095);
	v->a[28566] = 3;
	v->a[28567] = sym_file_descriptor;
	v->a[28568] = sym__bare_dollar;
	v->a[28569] = ts_builtin_sym_end;
	v->a[28570] = actions(1097);
	v->a[28571] = 27;
	v->a[28572] = anon_sym_LPAREN;
	v->a[28573] = anon_sym_PIPE;
	v->a[28574] = anon_sym_SEMI_SEMI;
	v->a[28575] = anon_sym_AMP_AMP;
	v->a[28576] = anon_sym_PIPE_PIPE;
	v->a[28577] = anon_sym_LT;
	v->a[28578] = anon_sym_GT;
	v->a[28579] = anon_sym_GT_GT;
	small_parse_table_1429(v);
}

void	small_parse_table_1429(t_small_parse_table_array *v)
{
	v->a[28580] = anon_sym_LT_AMP;
	v->a[28581] = anon_sym_GT_AMP;
	v->a[28582] = anon_sym_GT_PIPE;
	v->a[28583] = anon_sym_LT_AMP_DASH;
	v->a[28584] = anon_sym_GT_AMP_DASH;
	v->a[28585] = anon_sym_LT_LT;
	v->a[28586] = anon_sym_LT_LT_DASH;
	v->a[28587] = aux_sym_heredoc_redirect_token1;
	v->a[28588] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28589] = anon_sym_AMP;
	v->a[28590] = anon_sym_DOLLAR;
	v->a[28591] = anon_sym_DQUOTE;
	v->a[28592] = sym_raw_string;
	v->a[28593] = sym_number;
	v->a[28594] = anon_sym_DOLLAR_LBRACE;
	v->a[28595] = anon_sym_DOLLAR_LPAREN;
	v->a[28596] = anon_sym_BQUOTE;
	v->a[28597] = sym_word;
	v->a[28598] = anon_sym_SEMI;
	v->a[28599] = 8;
	small_parse_table_1430(v);
}

/* EOF small_parse_table_285.c */
