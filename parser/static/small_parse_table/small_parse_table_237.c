/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_237.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1185(t_small_parse_table_array *v)
{
	v->a[23700] = aux_sym_heredoc_redirect_token1;
	v->a[23701] = anon_sym_AMP;
	v->a[23702] = anon_sym_SEMI;
	v->a[23703] = state(1059);
	v->a[23704] = 3;
	v->a[23705] = sym_file_redirect;
	v->a[23706] = sym_heredoc_redirect;
	v->a[23707] = aux_sym_redirected_statement_repeat1;
	v->a[23708] = actions(690);
	v->a[23709] = 16;
	v->a[23710] = anon_sym_LT;
	v->a[23711] = anon_sym_GT;
	v->a[23712] = anon_sym_GT_GT;
	v->a[23713] = anon_sym_LT_AMP;
	v->a[23714] = anon_sym_GT_AMP;
	v->a[23715] = anon_sym_GT_PIPE;
	v->a[23716] = anon_sym_LT_GT;
	v->a[23717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23718] = anon_sym_DOLLAR;
	v->a[23719] = anon_sym_DQUOTE;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = sym_raw_string;
	v->a[23721] = sym_number;
	v->a[23722] = anon_sym_DOLLAR_LBRACE;
	v->a[23723] = anon_sym_DOLLAR_LPAREN;
	v->a[23724] = anon_sym_BQUOTE;
	v->a[23725] = sym_word;
	v->a[23726] = 7;
	v->a[23727] = actions(680);
	v->a[23728] = 1;
	v->a[23729] = sym_comment;
	v->a[23730] = actions(666);
	v->a[23731] = 2;
	v->a[23732] = anon_sym_GT_GT;
	v->a[23733] = anon_sym_LT_LT;
	v->a[23734] = actions(674);
	v->a[23735] = 2;
	v->a[23736] = anon_sym_PLUS;
	v->a[23737] = anon_sym_DASH;
	v->a[23738] = actions(678);
	v->a[23739] = 2;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = anon_sym_PLUS_PLUS2;
	v->a[23741] = anon_sym_DASH_DASH2;
	v->a[23742] = actions(676);
	v->a[23743] = 3;
	v->a[23744] = anon_sym_STAR;
	v->a[23745] = anon_sym_SLASH;
	v->a[23746] = anon_sym_PERCENT;
	v->a[23747] = actions(682);
	v->a[23748] = 6;
	v->a[23749] = anon_sym_PIPE;
	v->a[23750] = anon_sym_EQ;
	v->a[23751] = anon_sym_LT;
	v->a[23752] = anon_sym_GT;
	v->a[23753] = anon_sym_CARET;
	v->a[23754] = anon_sym_AMP;
	v->a[23755] = actions(684);
	v->a[23756] = 19;
	v->a[23757] = anon_sym_AMP_AMP;
	v->a[23758] = anon_sym_PIPE_PIPE;
	v->a[23759] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = anon_sym_PLUS_EQ;
	v->a[23761] = anon_sym_DASH_EQ;
	v->a[23762] = anon_sym_STAR_EQ;
	v->a[23763] = anon_sym_SLASH_EQ;
	v->a[23764] = anon_sym_PERCENT_EQ;
	v->a[23765] = anon_sym_LT_LT_EQ;
	v->a[23766] = anon_sym_GT_GT_EQ;
	v->a[23767] = anon_sym_AMP_EQ;
	v->a[23768] = anon_sym_CARET_EQ;
	v->a[23769] = anon_sym_PIPE_EQ;
	v->a[23770] = anon_sym_EQ_EQ;
	v->a[23771] = anon_sym_BANG_EQ;
	v->a[23772] = anon_sym_LT_EQ;
	v->a[23773] = anon_sym_GT_EQ;
	v->a[23774] = anon_sym_QMARK;
	v->a[23775] = anon_sym_COLON;
	v->a[23776] = 3;
	v->a[23777] = actions(680);
	v->a[23778] = 1;
	v->a[23779] = sym_comment;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = actions(885);
	v->a[23781] = 13;
	v->a[23782] = anon_sym_PIPE;
	v->a[23783] = anon_sym_EQ;
	v->a[23784] = anon_sym_LT;
	v->a[23785] = anon_sym_GT;
	v->a[23786] = anon_sym_GT_GT;
	v->a[23787] = anon_sym_LT_LT;
	v->a[23788] = anon_sym_CARET;
	v->a[23789] = anon_sym_AMP;
	v->a[23790] = anon_sym_PLUS;
	v->a[23791] = anon_sym_DASH;
	v->a[23792] = anon_sym_STAR;
	v->a[23793] = anon_sym_SLASH;
	v->a[23794] = anon_sym_PERCENT;
	v->a[23795] = actions(887);
	v->a[23796] = 21;
	v->a[23797] = anon_sym_AMP_AMP;
	v->a[23798] = anon_sym_PIPE_PIPE;
	v->a[23799] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
