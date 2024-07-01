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
	v->a[23700] = sym_comment;
	v->a[23701] = state(732);
	v->a[23702] = 1;
	v->a[23703] = sym_concatenation;
	v->a[23704] = actions(713);
	v->a[23705] = 2;
	v->a[23706] = sym_file_descriptor;
	v->a[23707] = sym_variable_name;
	v->a[23708] = state(419);
	v->a[23709] = 5;
	v->a[23710] = sym_arithmetic_expansion;
	v->a[23711] = sym_string;
	v->a[23712] = sym_simple_expansion;
	v->a[23713] = sym_expansion;
	v->a[23714] = sym_command_substitution;
	v->a[23715] = actions(711);
	v->a[23716] = 27;
	v->a[23717] = anon_sym_esac;
	v->a[23718] = anon_sym_PIPE;
	v->a[23719] = anon_sym_SEMI_SEMI;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = anon_sym_AMP_AMP;
	v->a[23721] = anon_sym_PIPE_PIPE;
	v->a[23722] = anon_sym_LT;
	v->a[23723] = anon_sym_GT;
	v->a[23724] = anon_sym_GT_GT;
	v->a[23725] = anon_sym_LT_AMP;
	v->a[23726] = anon_sym_GT_AMP;
	v->a[23727] = anon_sym_GT_PIPE;
	v->a[23728] = anon_sym_LT_AMP_DASH;
	v->a[23729] = anon_sym_GT_AMP_DASH;
	v->a[23730] = anon_sym_LT_LT;
	v->a[23731] = anon_sym_LT_LT_DASH;
	v->a[23732] = aux_sym_heredoc_redirect_token1;
	v->a[23733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23734] = anon_sym_AMP;
	v->a[23735] = anon_sym_DOLLAR;
	v->a[23736] = anon_sym_DQUOTE;
	v->a[23737] = sym_raw_string;
	v->a[23738] = sym_number;
	v->a[23739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = anon_sym_DOLLAR_LPAREN;
	v->a[23741] = anon_sym_BQUOTE;
	v->a[23742] = sym_word;
	v->a[23743] = anon_sym_SEMI;
	v->a[23744] = 12;
	v->a[23745] = actions(3);
	v->a[23746] = 1;
	v->a[23747] = sym_comment;
	v->a[23748] = actions(795);
	v->a[23749] = 1;
	v->a[23750] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23751] = actions(798);
	v->a[23752] = 1;
	v->a[23753] = anon_sym_DOLLAR;
	v->a[23754] = actions(801);
	v->a[23755] = 1;
	v->a[23756] = anon_sym_DQUOTE;
	v->a[23757] = actions(804);
	v->a[23758] = 1;
	v->a[23759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = actions(807);
	v->a[23761] = 1;
	v->a[23762] = anon_sym_DOLLAR_LPAREN;
	v->a[23763] = actions(810);
	v->a[23764] = 1;
	v->a[23765] = anon_sym_BQUOTE;
	v->a[23766] = actions(577);
	v->a[23767] = 2;
	v->a[23768] = sym_file_descriptor;
	v->a[23769] = ts_builtin_sym_end;
	v->a[23770] = state(236);
	v->a[23771] = 2;
	v->a[23772] = sym_concatenation;
	v->a[23773] = aux_sym_for_statement_repeat1;
	v->a[23774] = actions(792);
	v->a[23775] = 3;
	v->a[23776] = sym_raw_string;
	v->a[23777] = sym_number;
	v->a[23778] = sym_word;
	v->a[23779] = state(552);
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = 5;
	v->a[23781] = sym_arithmetic_expansion;
	v->a[23782] = sym_string;
	v->a[23783] = sym_simple_expansion;
	v->a[23784] = sym_expansion;
	v->a[23785] = sym_command_substitution;
	v->a[23786] = actions(582);
	v->a[23787] = 17;
	v->a[23788] = anon_sym_PIPE;
	v->a[23789] = anon_sym_SEMI_SEMI;
	v->a[23790] = anon_sym_AMP_AMP;
	v->a[23791] = anon_sym_PIPE_PIPE;
	v->a[23792] = anon_sym_LT;
	v->a[23793] = anon_sym_GT;
	v->a[23794] = anon_sym_GT_GT;
	v->a[23795] = anon_sym_LT_AMP;
	v->a[23796] = anon_sym_GT_AMP;
	v->a[23797] = anon_sym_GT_PIPE;
	v->a[23798] = anon_sym_LT_AMP_DASH;
	v->a[23799] = anon_sym_GT_AMP_DASH;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
