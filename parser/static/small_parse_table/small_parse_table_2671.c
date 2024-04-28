/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2671.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13355(t_small_parse_table_array *v)
{
	v->a[267100] = anon_sym_esac;
	v->a[267101] = anon_sym_SEMI_SEMI;
	v->a[267102] = anon_sym_SEMI_AMP;
	v->a[267103] = anon_sym_SEMI_SEMI_AMP;
	v->a[267104] = anon_sym_PIPE_AMP;
	v->a[267105] = anon_sym_AMP_GT;
	v->a[267106] = anon_sym_AMP_GT_GT;
	v->a[267107] = anon_sym_LT_AMP;
	v->a[267108] = anon_sym_GT_AMP;
	v->a[267109] = anon_sym_GT_PIPE;
	v->a[267110] = anon_sym_LT_AMP_DASH;
	v->a[267111] = anon_sym_GT_AMP_DASH;
	v->a[267112] = anon_sym_LT_LT_DASH;
	v->a[267113] = 3;
	v->a[267114] = actions(3);
	v->a[267115] = 1;
	v->a[267116] = sym_comment;
	v->a[267117] = actions(12163);
	v->a[267118] = 2;
	v->a[267119] = sym_file_descriptor;
	small_parse_table_13356(v);
}

void	small_parse_table_13356(t_small_parse_table_array *v)
{
	v->a[267120] = aux_sym_heredoc_redirect_token1;
	v->a[267121] = actions(12161);
	v->a[267122] = 22;
	v->a[267123] = anon_sym_SEMI;
	v->a[267124] = anon_sym_PIPE_PIPE;
	v->a[267125] = anon_sym_AMP_AMP;
	v->a[267126] = anon_sym_PIPE;
	v->a[267127] = anon_sym_AMP;
	v->a[267128] = anon_sym_LT;
	v->a[267129] = anon_sym_GT;
	v->a[267130] = anon_sym_LT_LT;
	v->a[267131] = anon_sym_GT_GT;
	v->a[267132] = anon_sym_esac;
	v->a[267133] = anon_sym_SEMI_SEMI;
	v->a[267134] = anon_sym_SEMI_AMP;
	v->a[267135] = anon_sym_SEMI_SEMI_AMP;
	v->a[267136] = anon_sym_PIPE_AMP;
	v->a[267137] = anon_sym_AMP_GT;
	v->a[267138] = anon_sym_AMP_GT_GT;
	v->a[267139] = anon_sym_LT_AMP;
	small_parse_table_13357(v);
}

void	small_parse_table_13357(t_small_parse_table_array *v)
{
	v->a[267140] = anon_sym_GT_AMP;
	v->a[267141] = anon_sym_GT_PIPE;
	v->a[267142] = anon_sym_LT_AMP_DASH;
	v->a[267143] = anon_sym_GT_AMP_DASH;
	v->a[267144] = anon_sym_LT_LT_DASH;
	v->a[267145] = 18;
	v->a[267146] = actions(71);
	v->a[267147] = 1;
	v->a[267148] = sym_comment;
	v->a[267149] = actions(12167);
	v->a[267150] = 1;
	v->a[267151] = anon_sym_LPAREN;
	v->a[267152] = actions(12169);
	v->a[267153] = 1;
	v->a[267154] = aux_sym__c_word_token1;
	v->a[267155] = actions(12171);
	v->a[267156] = 1;
	v->a[267157] = anon_sym_DOLLAR;
	v->a[267158] = actions(12173);
	v->a[267159] = 1;
	small_parse_table_13358(v);
}

void	small_parse_table_13358(t_small_parse_table_array *v)
{
	v->a[267160] = anon_sym_DQUOTE;
	v->a[267161] = actions(12175);
	v->a[267162] = 1;
	v->a[267163] = aux_sym_number_token1;
	v->a[267164] = actions(12177);
	v->a[267165] = 1;
	v->a[267166] = aux_sym_number_token2;
	v->a[267167] = actions(12179);
	v->a[267168] = 1;
	v->a[267169] = anon_sym_DOLLAR_LBRACE;
	v->a[267170] = actions(12181);
	v->a[267171] = 1;
	v->a[267172] = anon_sym_DOLLAR_LPAREN;
	v->a[267173] = actions(12183);
	v->a[267174] = 1;
	v->a[267175] = anon_sym_BQUOTE;
	v->a[267176] = actions(12185);
	v->a[267177] = 1;
	v->a[267178] = anon_sym_DOLLAR_BQUOTE;
	v->a[267179] = state(3442);
	small_parse_table_13359(v);
}

void	small_parse_table_13359(t_small_parse_table_array *v)
{
	v->a[267180] = 1;
	v->a[267181] = sym__c_unary_expression;
	v->a[267182] = state(3443);
	v->a[267183] = 1;
	v->a[267184] = sym__c_binary_expression;
	v->a[267185] = state(3444);
	v->a[267186] = 1;
	v->a[267187] = sym__c_postfix_expression;
	v->a[267188] = state(6605);
	v->a[267189] = 1;
	v->a[267190] = sym__c_expression;
	v->a[267191] = state(6762);
	v->a[267192] = 1;
	v->a[267193] = sym__c_variable_assignment;
	v->a[267194] = actions(12165);
	v->a[267195] = 2;
	v->a[267196] = anon_sym_PLUS_PLUS;
	v->a[267197] = anon_sym_DASH_DASH;
	v->a[267198] = state(3441);
	v->a[267199] = 7;
	small_parse_table_13360(v);
}

/* EOF small_parse_table_2671.c */
