/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_207.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1035(t_small_parse_table_array *v)
{
	v->a[20700] = actions(639);
	v->a[20701] = 3;
	v->a[20702] = sym_raw_string;
	v->a[20703] = sym_number;
	v->a[20704] = sym_word;
	v->a[20705] = state(407);
	v->a[20706] = 5;
	v->a[20707] = sym_arithmetic_expansion;
	v->a[20708] = sym_string;
	v->a[20709] = sym_simple_expansion;
	v->a[20710] = sym_expansion;
	v->a[20711] = sym_command_substitution;
	v->a[20712] = actions(504);
	v->a[20713] = 17;
	v->a[20714] = anon_sym_esac;
	v->a[20715] = anon_sym_PIPE;
	v->a[20716] = anon_sym_SEMI_SEMI;
	v->a[20717] = anon_sym_AMP_AMP;
	v->a[20718] = anon_sym_PIPE_PIPE;
	v->a[20719] = anon_sym_LT;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = anon_sym_GT;
	v->a[20721] = anon_sym_GT_GT;
	v->a[20722] = anon_sym_LT_AMP;
	v->a[20723] = anon_sym_GT_AMP;
	v->a[20724] = anon_sym_GT_PIPE;
	v->a[20725] = anon_sym_LT_GT;
	v->a[20726] = anon_sym_LT_LT;
	v->a[20727] = anon_sym_LT_LT_DASH;
	v->a[20728] = aux_sym_heredoc_redirect_token1;
	v->a[20729] = anon_sym_AMP;
	v->a[20730] = anon_sym_SEMI;
	v->a[20731] = 5;
	v->a[20732] = actions(3);
	v->a[20733] = 1;
	v->a[20734] = sym_comment;
	v->a[20735] = actions(495);
	v->a[20736] = 2;
	v->a[20737] = sym_file_descriptor;
	v->a[20738] = sym_variable_name;
	v->a[20739] = state(200);
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = 2;
	v->a[20741] = sym_concatenation;
	v->a[20742] = aux_sym_for_statement_repeat1;
	v->a[20743] = state(407);
	v->a[20744] = 5;
	v->a[20745] = sym_arithmetic_expansion;
	v->a[20746] = sym_string;
	v->a[20747] = sym_simple_expansion;
	v->a[20748] = sym_expansion;
	v->a[20749] = sym_command_substitution;
	v->a[20750] = actions(497);
	v->a[20751] = 26;
	v->a[20752] = anon_sym_esac;
	v->a[20753] = anon_sym_PIPE;
	v->a[20754] = anon_sym_SEMI_SEMI;
	v->a[20755] = anon_sym_AMP_AMP;
	v->a[20756] = anon_sym_PIPE_PIPE;
	v->a[20757] = anon_sym_LT;
	v->a[20758] = anon_sym_GT;
	v->a[20759] = anon_sym_GT_GT;
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = anon_sym_LT_AMP;
	v->a[20761] = anon_sym_GT_AMP;
	v->a[20762] = anon_sym_GT_PIPE;
	v->a[20763] = anon_sym_LT_GT;
	v->a[20764] = anon_sym_LT_LT;
	v->a[20765] = anon_sym_LT_LT_DASH;
	v->a[20766] = aux_sym_heredoc_redirect_token1;
	v->a[20767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20768] = anon_sym_AMP;
	v->a[20769] = anon_sym_DOLLAR;
	v->a[20770] = anon_sym_DQUOTE;
	v->a[20771] = sym_raw_string;
	v->a[20772] = sym_number;
	v->a[20773] = anon_sym_DOLLAR_LBRACE;
	v->a[20774] = anon_sym_DOLLAR_LPAREN;
	v->a[20775] = anon_sym_BQUOTE;
	v->a[20776] = sym_word;
	v->a[20777] = anon_sym_SEMI;
	v->a[20778] = 5;
	v->a[20779] = actions(3);
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = 1;
	v->a[20781] = sym_comment;
	v->a[20782] = actions(552);
	v->a[20783] = 2;
	v->a[20784] = sym_file_descriptor;
	v->a[20785] = sym_variable_name;
	v->a[20786] = state(200);
	v->a[20787] = 2;
	v->a[20788] = sym_concatenation;
	v->a[20789] = aux_sym_for_statement_repeat1;
	v->a[20790] = state(407);
	v->a[20791] = 5;
	v->a[20792] = sym_arithmetic_expansion;
	v->a[20793] = sym_string;
	v->a[20794] = sym_simple_expansion;
	v->a[20795] = sym_expansion;
	v->a[20796] = sym_command_substitution;
	v->a[20797] = actions(554);
	v->a[20798] = 26;
	v->a[20799] = anon_sym_esac;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
